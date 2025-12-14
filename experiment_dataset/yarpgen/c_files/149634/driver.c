#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)7515;
unsigned char var_9 = (unsigned char)230;
unsigned char var_10 = (unsigned char)21;
unsigned int var_14 = 2940834385U;
unsigned int var_18 = 4105692363U;
int zero = 0;
unsigned char var_19 = (unsigned char)250;
unsigned char var_20 = (unsigned char)137;
unsigned int var_21 = 2452147695U;
unsigned char var_22 = (unsigned char)49;
int var_23 = -257569991;
unsigned char var_24 = (unsigned char)232;
unsigned int var_25 = 296217870U;
unsigned short var_26 = (unsigned short)65301;
int arr_0 [16] ;
long long int arr_1 [16] ;
long long int arr_2 [16] [16] ;
unsigned char arr_5 [13] [13] ;
unsigned short arr_6 [13] ;
long long int arr_8 [12] [12] ;
int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -1722420520;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 6958076027791668968LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 496373607613192526LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)51471;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = 8672738707403489384LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1694892686 : -100699658;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
