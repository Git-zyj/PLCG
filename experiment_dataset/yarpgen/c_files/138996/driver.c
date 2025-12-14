#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8520486773143638731ULL;
long long int var_2 = 3475907059725898613LL;
int var_4 = 1560829537;
unsigned char var_5 = (unsigned char)2;
long long int var_6 = -2576274606727943823LL;
unsigned char var_7 = (unsigned char)80;
unsigned int var_8 = 1239068330U;
int zero = 0;
signed char var_10 = (signed char)-119;
long long int var_11 = 7628759603612948262LL;
long long int var_12 = 6924697228798355580LL;
unsigned char var_13 = (unsigned char)229;
long long int var_14 = 8598528032898883552LL;
unsigned int var_15 = 386363491U;
long long int var_16 = -117790261984619752LL;
unsigned long long int var_17 = 12307440029396065836ULL;
signed char var_18 = (signed char)33;
_Bool var_19 = (_Bool)0;
int var_20 = 2023504718;
long long int var_21 = -5787292982436435399LL;
unsigned int var_22 = 2003839968U;
long long int var_23 = 7250392621761700701LL;
long long int arr_4 [24] [24] ;
long long int arr_10 [24] [24] [24] [24] [24] [24] ;
short arr_11 [24] [24] [24] [24] ;
long long int arr_16 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -210436324752187647LL : -1764259522337010580LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 6267633170807694193LL : -4518434073149352584LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-3025 : (short)-19116;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = 5323928978207972720LL;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
