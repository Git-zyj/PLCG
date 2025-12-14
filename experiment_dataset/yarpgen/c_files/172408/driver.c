#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)127;
unsigned char var_8 = (unsigned char)68;
signed char var_10 = (signed char)-99;
unsigned int var_12 = 138008877U;
short var_13 = (short)11102;
unsigned int var_14 = 3406753120U;
unsigned long long int var_15 = 4160447898508588517ULL;
int var_16 = -400862336;
int var_17 = 1646848107;
unsigned int var_18 = 3069937242U;
int zero = 0;
int var_19 = 646669779;
int var_20 = 1433222382;
signed char var_21 = (signed char)-102;
unsigned char var_22 = (unsigned char)137;
short arr_0 [17] ;
short arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-8029;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-32429;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
