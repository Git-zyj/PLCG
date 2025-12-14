#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7941;
short var_4 = (short)-28246;
short var_5 = (short)26184;
signed char var_6 = (signed char)51;
int zero = 0;
unsigned long long int var_11 = 5031126967594023906ULL;
signed char var_12 = (signed char)56;
short var_13 = (short)-19907;
signed char arr_0 [24] ;
unsigned long long int arr_1 [24] ;
signed char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2344582689862668617ULL : 7244501260292844899ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-116 : (signed char)-126;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
