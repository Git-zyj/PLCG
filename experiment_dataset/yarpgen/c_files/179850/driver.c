#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 479320177U;
unsigned long long int var_6 = 18151964762074160077ULL;
int var_8 = -1511637700;
unsigned int var_9 = 156385054U;
int var_10 = -1596201531;
int var_12 = -710073080;
short var_13 = (short)5670;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)26;
short var_16 = (short)-26767;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_20 = -1931093812;
_Bool var_21 = (_Bool)1;
short var_22 = (short)3237;
unsigned char var_23 = (unsigned char)149;
int var_24 = -713001542;
long long int var_25 = 7566942437743039044LL;
long long int var_26 = -8359630903991383306LL;
unsigned long long int var_27 = 570653452122126395ULL;
short var_28 = (short)4697;
unsigned int var_29 = 598758883U;
int arr_4 [20] ;
unsigned char arr_5 [20] ;
unsigned char arr_8 [20] [20] [20] ;
unsigned int arr_9 [20] ;
short arr_10 [20] ;
unsigned char arr_11 [20] ;
long long int arr_7 [20] ;
unsigned long long int arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -282964409 : -747750136;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)241 : (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2455954634U : 3019012580U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (short)-25971;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -5255275080279423354LL : -4533051273168734792LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 17021659994240774032ULL : 13345926028502210741ULL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
