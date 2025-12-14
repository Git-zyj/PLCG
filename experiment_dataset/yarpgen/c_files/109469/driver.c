#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
unsigned char var_1 = (unsigned char)26;
unsigned int var_3 = 771495748U;
unsigned long long int var_4 = 8858959272199776307ULL;
unsigned short var_5 = (unsigned short)39549;
unsigned short var_6 = (unsigned short)40041;
int var_7 = 680580051;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_10 = (short)31811;
short var_11 = (short)21190;
short var_12 = (short)-30806;
short var_13 = (short)25260;
unsigned short var_14 = (unsigned short)589;
unsigned short var_15 = (unsigned short)32569;
unsigned long long int var_16 = 17748774188664768664ULL;
unsigned int var_17 = 361222198U;
int var_18 = -518040861;
int zero = 0;
unsigned int var_19 = 346448312U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 16788053560543075272ULL;
unsigned long long int var_22 = 14864505304603139982ULL;
unsigned char var_23 = (unsigned char)157;
unsigned long long int var_24 = 32052633418019695ULL;
long long int var_25 = -3650779394491996095LL;
unsigned short var_26 = (unsigned short)39318;
_Bool var_27 = (_Bool)1;
unsigned long long int var_28 = 9428788901175559519ULL;
_Bool var_29 = (_Bool)0;
int var_30 = 807408274;
_Bool arr_2 [22] [22] ;
unsigned short arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)36023;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
