#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15418591274530284538ULL;
unsigned char var_6 = (unsigned char)200;
unsigned int var_13 = 1299763944U;
int zero = 0;
unsigned long long int var_14 = 10491720823806520679ULL;
unsigned int var_15 = 3197462794U;
unsigned char var_16 = (unsigned char)38;
unsigned char var_17 = (unsigned char)65;
unsigned int var_18 = 4107016137U;
unsigned int var_19 = 106826145U;
unsigned int var_20 = 1741403668U;
unsigned int arr_0 [13] [13] ;
unsigned short arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 4220567013U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)60259;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
