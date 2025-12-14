#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18117;
unsigned char var_2 = (unsigned char)246;
short var_3 = (short)6623;
short var_4 = (short)14983;
unsigned char var_5 = (unsigned char)183;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)10929;
signed char var_10 = (signed char)-49;
short var_11 = (short)3972;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 2946095957137374043ULL;
unsigned long long int var_15 = 481546344647090813ULL;
int var_16 = -907730311;
short var_17 = (short)1214;
int zero = 0;
unsigned long long int var_18 = 3914894332550125362ULL;
unsigned int var_19 = 197540829U;
short var_20 = (short)-23075;
short var_21 = (short)-26961;
short var_22 = (short)8591;
unsigned char var_23 = (unsigned char)219;
unsigned long long int var_24 = 7830609020939399120ULL;
long long int var_25 = 3209710927581190225LL;
_Bool var_26 = (_Bool)1;
short var_27 = (short)251;
unsigned char var_28 = (unsigned char)72;
unsigned long long int arr_4 [11] [11] ;
unsigned long long int arr_8 [11] ;
unsigned short arr_11 [11] ;
unsigned long long int arr_14 [11] ;
_Bool arr_15 [11] ;
int arr_19 [21] ;
long long int arr_20 [21] [21] ;
short arr_27 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 14494392769847686545ULL : 5551088699486015574ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 11066491221785034943ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (unsigned short)22678;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = 10721807917669460400ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = 1036558309;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = 3096619275403639683LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (short)4476;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
