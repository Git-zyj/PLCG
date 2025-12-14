#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)186;
unsigned char var_6 = (unsigned char)83;
unsigned long long int var_7 = 4484029267701287940ULL;
unsigned char var_8 = (unsigned char)207;
int var_9 = 961016953;
signed char var_11 = (signed char)-32;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)18443;
int zero = 0;
short var_18 = (short)-9534;
unsigned int var_19 = 4128555780U;
unsigned long long int var_20 = 1273246458580704411ULL;
unsigned char var_21 = (unsigned char)11;
short var_22 = (short)25100;
unsigned char var_23 = (unsigned char)7;
unsigned char var_24 = (unsigned char)168;
unsigned short var_25 = (unsigned short)56396;
unsigned char var_26 = (unsigned char)132;
long long int arr_1 [10] ;
unsigned char arr_2 [10] ;
unsigned char arr_3 [10] [10] [10] ;
unsigned short arr_4 [10] [10] ;
signed char arr_6 [10] ;
signed char arr_7 [10] [10] ;
unsigned long long int arr_8 [10] [10] ;
signed char arr_12 [10] ;
long long int arr_15 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_17 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1615849896999490941LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)18890;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 6396154608702193431ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -3951013811763756518LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (unsigned short)53227;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
