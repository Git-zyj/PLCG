#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7209715232851334709LL;
signed char var_1 = (signed char)-67;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 3157856991860738030ULL;
unsigned char var_4 = (unsigned char)236;
unsigned char var_5 = (unsigned char)94;
unsigned char var_6 = (unsigned char)135;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)3;
unsigned char var_9 = (unsigned char)215;
unsigned short var_10 = (unsigned short)46753;
_Bool var_11 = (_Bool)1;
long long int var_12 = -6545981559562090836LL;
int var_13 = 588395995;
int zero = 0;
short var_15 = (short)-32466;
short var_16 = (short)2230;
short var_17 = (short)-29700;
long long int var_18 = -2774099661693066830LL;
unsigned char var_19 = (unsigned char)200;
unsigned long long int var_20 = 4597458578509053252ULL;
unsigned long long int var_21 = 14030030405115448782ULL;
unsigned short var_22 = (unsigned short)33149;
long long int var_23 = 7282689204617068184LL;
unsigned char var_24 = (unsigned char)182;
long long int var_25 = -2303440196329529738LL;
unsigned int var_26 = 1602785049U;
int var_27 = -410820228;
unsigned char var_28 = (unsigned char)49;
unsigned short arr_7 [14] ;
unsigned long long int arr_10 [14] [14] [14] ;
unsigned int arr_16 [14] [14] [14] ;
unsigned char arr_19 [14] [14] [14] ;
_Bool arr_20 [14] ;
short arr_21 [14] [14] ;
_Bool arr_24 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned short)16552;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 6507496631812867399ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 113659140U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = (short)4970;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
