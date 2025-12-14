#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55150;
unsigned long long int var_3 = 8797683825217964297ULL;
unsigned char var_6 = (unsigned char)244;
int var_8 = 1511645087;
unsigned long long int var_9 = 17972147565286620514ULL;
int var_12 = 44094965;
int var_13 = -2110228327;
unsigned long long int var_14 = 16279564289713304316ULL;
int var_17 = 74158394;
unsigned long long int var_18 = 3190115893123076648ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)93;
short var_20 = (short)-14984;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 14146143143057098580ULL;
unsigned char var_23 = (unsigned char)135;
unsigned char var_24 = (unsigned char)144;
unsigned int var_25 = 1103186676U;
short var_26 = (short)10677;
unsigned long long int var_27 = 5302783106419758980ULL;
unsigned long long int var_28 = 17450027235427311051ULL;
signed char var_29 = (signed char)-4;
unsigned short var_30 = (unsigned short)51785;
signed char arr_0 [19] ;
unsigned short arr_1 [19] [19] ;
unsigned char arr_2 [19] [19] ;
unsigned long long int arr_5 [19] [19] ;
unsigned long long int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)26059;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)43 : (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 18304235022215802632ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 10160578231784988474ULL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
