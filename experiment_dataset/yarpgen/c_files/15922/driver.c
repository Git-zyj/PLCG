#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)13;
unsigned char var_5 = (unsigned char)77;
signed char var_7 = (signed char)92;
signed char var_10 = (signed char)-26;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)125;
int zero = 0;
unsigned short var_17 = (unsigned short)23960;
unsigned long long int var_18 = 5338790954416585829ULL;
unsigned short var_19 = (unsigned short)65123;
unsigned long long int var_20 = 1797144745971509497ULL;
signed char var_21 = (signed char)-80;
signed char var_22 = (signed char)25;
unsigned int var_23 = 2814686599U;
unsigned int var_24 = 4244933468U;
short var_25 = (short)8689;
_Bool arr_0 [25] ;
unsigned short arr_2 [25] [25] [25] ;
unsigned int arr_3 [25] ;
unsigned short arr_5 [25] [25] [25] [25] ;
unsigned long long int arr_6 [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)35298 : (unsigned short)45722;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 4098903324U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)22529 : (unsigned short)24345;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 5962457274468163096ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
