#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8424;
unsigned char var_3 = (unsigned char)125;
signed char var_4 = (signed char)-18;
unsigned short var_5 = (unsigned short)25287;
short var_6 = (short)9568;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)73;
long long int var_12 = 1269508963168823026LL;
signed char var_13 = (signed char)-18;
signed char arr_1 [25] ;
short arr_8 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-26463;
}

void checksum() {
    hash(&seed, var_10);
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
