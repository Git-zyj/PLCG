#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 6273463422218912513ULL;
unsigned short var_4 = (unsigned short)21875;
unsigned short var_8 = (unsigned short)65366;
unsigned int var_13 = 3796169712U;
unsigned int var_14 = 3565564894U;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 394248106;
short var_17 = (short)-20261;
unsigned long long int var_18 = 4884349699801346010ULL;
unsigned char var_19 = (unsigned char)188;
unsigned int var_20 = 377617870U;
signed char var_21 = (signed char)-36;
signed char arr_0 [12] ;
short arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)18480;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
