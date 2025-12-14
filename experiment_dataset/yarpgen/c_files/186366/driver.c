#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8961;
unsigned char var_3 = (unsigned char)107;
unsigned int var_4 = 1366435858U;
unsigned char var_8 = (unsigned char)116;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)190;
long long int var_11 = -4120497867255880173LL;
signed char var_12 = (signed char)75;
unsigned int var_14 = 3606311525U;
unsigned short var_15 = (unsigned short)60714;
int zero = 0;
int var_16 = 1952637087;
unsigned int var_17 = 3262257771U;
unsigned long long int var_18 = 17095494792760496674ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 199150199820997615ULL;
unsigned short var_21 = (unsigned short)30797;
unsigned short var_22 = (unsigned short)3544;
signed char var_23 = (signed char)69;
_Bool var_24 = (_Bool)1;
long long int var_25 = -5497070153173104139LL;
long long int var_26 = -2770321607015338979LL;
short var_27 = (short)-22201;
unsigned short arr_0 [12] ;
short arr_1 [12] ;
unsigned long long int arr_6 [12] ;
unsigned short arr_27 [19] ;
unsigned short arr_28 [19] [19] [19] ;
unsigned long long int arr_14 [12] [12] [12] ;
long long int arr_30 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)8746 : (unsigned short)51449;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-12503;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 8438113822234304341ULL : 14767945689337534684ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = (unsigned short)58488;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)43784 : (unsigned short)42574;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 14215113802450844245ULL : 15781153693312745811ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6454852641322809823LL : 3986250442299391432LL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
