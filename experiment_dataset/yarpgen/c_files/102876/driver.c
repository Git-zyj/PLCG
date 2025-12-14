#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19160;
_Bool var_2 = (_Bool)1;
int var_3 = -2116117242;
int var_4 = -919208588;
unsigned char var_6 = (unsigned char)166;
long long int var_7 = 2918165875941472946LL;
unsigned int var_9 = 3720670103U;
int zero = 0;
long long int var_10 = 7354229322884895607LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = 4408754024802534760LL;
unsigned short var_13 = (unsigned short)12437;
signed char var_14 = (signed char)80;
short var_15 = (short)14610;
unsigned char var_16 = (unsigned char)82;
long long int var_17 = 381393283517381791LL;
signed char var_18 = (signed char)58;
int var_19 = 1193718523;
unsigned short var_20 = (unsigned short)17602;
unsigned short var_21 = (unsigned short)35296;
short arr_0 [14] [14] ;
unsigned short arr_1 [14] [14] ;
_Bool arr_3 [14] [14] [14] ;
_Bool arr_5 [14] [14] ;
signed char arr_7 [14] [14] [14] ;
short arr_10 [14] [14] [14] [14] [14] [14] ;
unsigned int arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-3298;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)28439;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (short)-29399 : (short)32241;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 122066022U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
