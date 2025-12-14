#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)187;
unsigned char var_2 = (unsigned char)207;
int var_5 = -320195949;
unsigned char var_6 = (unsigned char)1;
signed char var_8 = (signed char)-27;
unsigned char var_10 = (unsigned char)172;
unsigned char var_11 = (unsigned char)250;
short var_12 = (short)-22181;
long long int var_15 = -4640645832746136744LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)58822;
unsigned long long int var_21 = 7121927694964604513ULL;
signed char var_22 = (signed char)-50;
signed char var_23 = (signed char)-72;
unsigned short var_24 = (unsigned short)49399;
long long int var_25 = 7954342754101788094LL;
unsigned char var_26 = (unsigned char)213;
unsigned char var_27 = (unsigned char)193;
signed char var_28 = (signed char)108;
_Bool var_29 = (_Bool)0;
signed char arr_0 [11] [11] ;
unsigned char arr_4 [11] [11] [11] ;
unsigned int arr_6 [11] [11] [11] ;
unsigned long long int arr_8 [16] ;
long long int arr_10 [23] ;
signed char arr_11 [23] ;
long long int arr_13 [23] [23] [23] ;
unsigned long long int arr_2 [11] ;
_Bool arr_16 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3648688321U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 4420525215262462732ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 51102936733235397LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1465028909253098877LL : 5590547344459100546LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2888065926743398920ULL : 17698097758359679340ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
