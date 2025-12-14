#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -428924173;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)-9;
unsigned int var_9 = 1997481140U;
int zero = 0;
int var_15 = 1886993872;
unsigned long long int var_16 = 16132160435263193598ULL;
_Bool var_17 = (_Bool)1;
int var_18 = 256770829;
unsigned char var_19 = (unsigned char)81;
_Bool arr_0 [22] ;
unsigned int arr_3 [22] [22] ;
unsigned int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1729788236U : 2274561371U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 1253562807U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
