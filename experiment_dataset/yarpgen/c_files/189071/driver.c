#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1179315159;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2987279642U;
unsigned long long int var_7 = 8233991674425760011ULL;
long long int var_10 = 7303727634765183544LL;
short var_11 = (short)-18962;
int zero = 0;
int var_12 = 1984072466;
unsigned int var_13 = 2972668167U;
short var_14 = (short)1367;
short var_15 = (short)-28280;
unsigned int var_16 = 1939112733U;
int var_17 = -2129304994;
signed char var_18 = (signed char)-64;
long long int var_19 = -9133078522740103296LL;
short var_20 = (short)23409;
signed char var_21 = (signed char)45;
short var_22 = (short)1820;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)52;
int var_25 = 1123591098;
unsigned short arr_0 [18] ;
unsigned char arr_1 [18] [18] ;
int arr_3 [12] ;
unsigned long long int arr_4 [12] ;
long long int arr_5 [12] [12] [12] ;
short arr_8 [12] [12] [12] [12] ;
short arr_16 [16] [16] ;
unsigned char arr_17 [16] [16] ;
unsigned short arr_18 [16] ;
unsigned long long int arr_20 [16] ;
long long int arr_23 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)64518;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 958857777;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 7467417535004618723ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 5296211738822994320LL : -2955958357667961137LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-982 : (short)20023;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-4771;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (unsigned short)54939;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 309018485288661661ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 5735764723529955993LL;
}

void checksum() {
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
