#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6694164998368186236LL;
int var_1 = 1245159979;
short var_2 = (short)-14750;
unsigned int var_4 = 2917717167U;
unsigned short var_7 = (unsigned short)33446;
unsigned long long int var_8 = 5121411384543246658ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)0;
int zero = 0;
unsigned char var_13 = (unsigned char)159;
int var_14 = -1674618718;
long long int var_15 = 191742015107376651LL;
long long int var_16 = 2182239875172846657LL;
unsigned long long int var_17 = 13777911624496014934ULL;
unsigned long long int var_18 = 7087491134547708922ULL;
signed char var_19 = (signed char)8;
unsigned long long int var_20 = 14368994118458603831ULL;
unsigned long long int var_21 = 14284997363185638693ULL;
signed char var_22 = (signed char)97;
short var_23 = (short)-19142;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)53917;
signed char var_26 = (signed char)-122;
unsigned short var_27 = (unsigned short)17672;
_Bool var_28 = (_Bool)1;
long long int var_29 = 6472552981040675868LL;
signed char var_30 = (signed char)62;
int var_31 = 2066436879;
long long int var_32 = -8440466798591749592LL;
long long int var_33 = 7090886580434162208LL;
unsigned long long int arr_0 [13] ;
unsigned int arr_5 [13] [13] [13] ;
signed char arr_14 [13] [13] ;
unsigned char arr_15 [13] [13] [13] [13] ;
signed char arr_20 [13] [13] [13] ;
signed char arr_22 [13] [13] [13] [13] ;
_Bool arr_39 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1698022415088757677ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2634036815U : 2747569854U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)5 : (signed char)-57;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_39 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
