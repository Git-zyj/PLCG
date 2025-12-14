#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1200706175U;
long long int var_2 = 478350997592301332LL;
unsigned int var_3 = 1632925798U;
int var_8 = 555733582;
int zero = 0;
signed char var_10 = (signed char)-61;
short var_11 = (short)32391;
unsigned long long int var_12 = 13649505531999798303ULL;
signed char arr_2 [25] ;
unsigned int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 929457072U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
