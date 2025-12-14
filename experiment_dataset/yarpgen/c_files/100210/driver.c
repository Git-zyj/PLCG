#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -141641397;
unsigned short var_1 = (unsigned short)56680;
int var_2 = -1550235245;
signed char var_3 = (signed char)-58;
int var_4 = -543763724;
unsigned char var_5 = (unsigned char)199;
unsigned short var_6 = (unsigned short)36913;
int var_7 = 1829237024;
long long int var_8 = 8176474303572829663LL;
int var_10 = 1164342269;
int zero = 0;
unsigned int var_11 = 2844974672U;
unsigned long long int var_12 = 2938069000603695965ULL;
int var_13 = 888279090;
signed char var_14 = (signed char)-33;
unsigned char var_15 = (unsigned char)43;
unsigned char var_16 = (unsigned char)217;
int var_17 = -1510284382;
unsigned char var_18 = (unsigned char)182;
int var_19 = 928320617;
unsigned short var_20 = (unsigned short)12871;
unsigned int var_21 = 372541741U;
long long int var_22 = 7284431677093307450LL;
long long int arr_0 [22] ;
unsigned char arr_1 [22] [22] ;
_Bool arr_3 [22] ;
unsigned int arr_5 [22] [22] ;
_Bool arr_6 [22] ;
int arr_7 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -209377062469797195LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 700301979U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 336561869;
}

void checksum() {
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
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
