#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5616244052698700085ULL;
unsigned long long int var_5 = 8132859328362120105ULL;
unsigned char var_6 = (unsigned char)51;
unsigned char var_9 = (unsigned char)146;
long long int var_10 = -9067286212653906990LL;
unsigned int var_13 = 3103075010U;
signed char var_15 = (signed char)94;
unsigned short var_16 = (unsigned short)32521;
unsigned short var_17 = (unsigned short)34050;
int zero = 0;
long long int var_19 = -7924805777504280940LL;
short var_20 = (short)-25042;
signed char var_21 = (signed char)117;
unsigned int var_22 = 3781052772U;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 9013479573641645360ULL;
long long int var_25 = 6558530548200612966LL;
unsigned long long int var_26 = 8690018874025526561ULL;
unsigned int var_27 = 1959103480U;
unsigned long long int var_28 = 773508184693166391ULL;
signed char var_29 = (signed char)79;
unsigned long long int var_30 = 7039041488455253969ULL;
unsigned short arr_1 [17] ;
unsigned long long int arr_2 [17] [17] [17] ;
_Bool arr_3 [17] [17] [17] ;
unsigned int arr_4 [17] ;
unsigned char arr_5 [17] [17] [17] [17] ;
unsigned char arr_6 [11] ;
unsigned char arr_10 [16] [16] ;
unsigned short arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)12765;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 8935420558210235349ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 4111026790U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)155 : (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)174 : (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7014 : (unsigned short)60855;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
