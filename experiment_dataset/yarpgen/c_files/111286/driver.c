#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)53631;
unsigned short var_5 = (unsigned short)10284;
unsigned int var_7 = 330951987U;
unsigned char var_8 = (unsigned char)108;
unsigned long long int var_12 = 1104083361717161225ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 2321964361U;
unsigned short var_15 = (unsigned short)6618;
unsigned short var_16 = (unsigned short)22170;
short var_17 = (short)15063;
unsigned short var_18 = (unsigned short)8592;
unsigned char arr_1 [23] ;
unsigned char arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)110 : (unsigned char)26;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
