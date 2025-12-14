#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6289380698301777846ULL;
long long int var_4 = 5151441321498127669LL;
long long int var_5 = -9001019685639249824LL;
unsigned char var_7 = (unsigned char)126;
int var_8 = 1027186940;
unsigned char var_10 = (unsigned char)212;
unsigned long long int var_12 = 14690001757099928846ULL;
short var_13 = (short)32620;
unsigned long long int var_14 = 17809231851735890308ULL;
unsigned char var_15 = (unsigned char)148;
int zero = 0;
unsigned long long int var_16 = 13740112470822152123ULL;
short var_17 = (short)-7274;
int var_18 = -749422341;
short var_19 = (short)10311;
int var_20 = 1472166055;
short var_21 = (short)-28901;
short var_22 = (short)-14578;
short var_23 = (short)16855;
unsigned long long int var_24 = 6166730468526495560ULL;
short var_25 = (short)-29931;
short var_26 = (short)7843;
short var_27 = (short)11042;
long long int var_28 = -255253322200483483LL;
unsigned char var_29 = (unsigned char)250;
unsigned long long int var_30 = 17870874752164475989ULL;
int var_31 = -776854580;
unsigned long long int var_32 = 1978674417528424671ULL;
short var_33 = (short)23793;
short var_34 = (short)-22885;
unsigned char var_35 = (unsigned char)169;
unsigned long long int arr_0 [15] [15] ;
int arr_1 [15] ;
unsigned long long int arr_2 [22] ;
unsigned char arr_4 [22] ;
short arr_6 [23] ;
short arr_7 [23] ;
unsigned char arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 5385382345526321012ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 671944032;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 5028391738539677256ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)-14725;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)14895;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned char)97;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
