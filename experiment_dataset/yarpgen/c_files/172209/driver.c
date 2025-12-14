#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)252;
signed char var_2 = (signed char)112;
int var_3 = -1005603655;
signed char var_5 = (signed char)-76;
unsigned long long int var_6 = 11483277015114201877ULL;
unsigned int var_7 = 582299100U;
unsigned char var_8 = (unsigned char)177;
unsigned long long int var_9 = 12306092741961337932ULL;
short var_11 = (short)-31470;
unsigned long long int var_12 = 18439078023307707683ULL;
unsigned long long int var_14 = 1730092436927912638ULL;
int zero = 0;
int var_15 = -1064991239;
unsigned int var_16 = 3724889313U;
signed char var_17 = (signed char)-18;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3452580468U;
unsigned int var_20 = 28951519U;
unsigned int var_21 = 3978481111U;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 1831316937U;
unsigned long long int var_24 = 13695386436153479644ULL;
unsigned int var_25 = 665889378U;
unsigned long long int var_26 = 13053718226251682052ULL;
unsigned int var_27 = 1396036187U;
unsigned int var_28 = 206912978U;
int var_29 = 52847310;
int var_30 = 1844392839;
unsigned int var_31 = 3005284398U;
unsigned long long int var_32 = 11090208646436507511ULL;
_Bool var_33 = (_Bool)0;
unsigned int var_34 = 3892290789U;
unsigned int var_35 = 1144174773U;
unsigned int arr_0 [24] [24] ;
_Bool arr_1 [24] ;
unsigned long long int arr_3 [24] [24] ;
short arr_5 [24] [24] [24] ;
unsigned long long int arr_6 [24] [24] ;
int arr_8 [24] ;
unsigned char arr_10 [24] [24] [24] [24] [24] [24] ;
short arr_13 [24] [24] [24] [24] ;
signed char arr_18 [24] [24] [24] ;
unsigned long long int arr_21 [24] ;
unsigned int arr_23 [24] [24] [24] ;
short arr_25 [24] [24] [24] ;
long long int arr_26 [24] ;
unsigned long long int arr_32 [24] [24] ;
unsigned long long int arr_20 [24] ;
short arr_36 [24] [24] [24] ;
short arr_37 [24] [24] [24] ;
unsigned long long int arr_38 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 399258317U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 681272074370528975ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)21513;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 4468137144921502552ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 1529627841;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)-7373;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = 17627187509819616078ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2465829152U : 500185550U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (short)-19650;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = -5129750758227693957LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_32 [i_0] [i_1] = (i_1 % 2 == 0) ? 8957226974646281087ULL : 6595905169433459683ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = 10368404224863830551ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-24634 : (short)-32298;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-9836 : (short)-16968;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_38 [i_0] = 13242244063999378282ULL;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_36 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
