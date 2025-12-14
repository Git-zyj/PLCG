#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3104981730U;
unsigned char var_1 = (unsigned char)98;
unsigned char var_3 = (unsigned char)236;
short var_4 = (short)-16240;
unsigned char var_6 = (unsigned char)204;
long long int var_8 = 779935770357812590LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = -3226807889770328904LL;
unsigned short var_14 = (unsigned short)56307;
int zero = 0;
int var_16 = -2107627972;
long long int var_17 = 1483601749495080541LL;
unsigned short var_18 = (unsigned short)37274;
int var_19 = 553382212;
signed char var_20 = (signed char)-2;
long long int var_21 = 3431056706790808628LL;
unsigned short var_22 = (unsigned short)30449;
unsigned short arr_1 [12] [12] ;
signed char arr_3 [12] ;
short arr_4 [12] [12] ;
unsigned char arr_5 [12] [12] [12] ;
unsigned char arr_8 [12] [12] [12] [12] ;
int arr_9 [12] [12] [12] [12] ;
short arr_11 [12] [12] ;
unsigned char arr_15 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)50180;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-12752;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 966991837;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (short)9502;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (unsigned char)97;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
