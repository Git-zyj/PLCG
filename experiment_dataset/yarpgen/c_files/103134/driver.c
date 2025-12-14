#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2164206395U;
long long int var_9 = -1821574103537286469LL;
short var_10 = (short)24056;
unsigned char var_11 = (unsigned char)123;
int var_13 = 545671139;
int zero = 0;
unsigned long long int var_15 = 360392302026208224ULL;
unsigned int var_16 = 3999724568U;
signed char var_17 = (signed char)18;
unsigned long long int var_18 = 16815648572670858699ULL;
signed char var_19 = (signed char)-15;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-32570;
unsigned int var_22 = 2316248397U;
unsigned long long int var_23 = 13034336212754513402ULL;
unsigned char arr_0 [24] ;
signed char arr_1 [24] ;
signed char arr_17 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)91 : (signed char)-79;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-36 : (signed char)15;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
