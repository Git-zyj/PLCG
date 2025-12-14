#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
long long int var_1 = -6388191188187451593LL;
long long int var_2 = 6037141771314052021LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 12091301430367299795ULL;
short var_6 = (short)-17400;
signed char var_7 = (signed char)-19;
long long int var_9 = 1044879226183316843LL;
long long int var_10 = -41346732805742830LL;
long long int var_11 = 4103633383081593382LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -7947538723363137768LL;
unsigned short var_14 = (unsigned short)58924;
unsigned short var_15 = (unsigned short)201;
signed char var_16 = (signed char)78;
int var_17 = 677289253;
short var_18 = (short)-24212;
short var_19 = (short)-30603;
unsigned long long int var_20 = 6822912920780866794ULL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)49161;
unsigned long long int var_23 = 13633195650582283445ULL;
long long int var_24 = -2868460974678879300LL;
unsigned char var_25 = (unsigned char)49;
signed char var_26 = (signed char)22;
signed char var_27 = (signed char)66;
long long int var_28 = -2044647369851713297LL;
short var_29 = (short)29364;
short var_30 = (short)-1018;
long long int var_31 = -8883047488080206755LL;
unsigned short var_32 = (unsigned short)9561;
unsigned char var_33 = (unsigned char)67;
unsigned long long int arr_0 [19] ;
int arr_1 [19] ;
unsigned long long int arr_2 [19] ;
int arr_5 [19] ;
short arr_6 [19] [19] ;
long long int arr_7 [19] ;
signed char arr_11 [19] [19] [19] ;
short arr_12 [19] [19] ;
unsigned short arr_13 [19] [19] [19] ;
unsigned short arr_18 [19] [19] [19] ;
long long int arr_20 [16] ;
short arr_24 [16] [16] ;
int arr_30 [16] ;
unsigned long long int arr_33 [16] [16] [16] ;
int arr_4 [19] ;
signed char arr_10 [19] [19] [19] ;
_Bool arr_16 [19] [19] [19] ;
short arr_17 [19] [19] ;
unsigned short arr_23 [16] ;
signed char arr_27 [16] ;
signed char arr_28 [16] ;
int arr_35 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 530281381602024617ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 179670384;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 15801460470803533807ULL : 857011884015738570ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -866103277;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-18542;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 432461426203315477LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-111 : (signed char)7;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-11972 : (short)8245;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)53189;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)55417 : (unsigned short)21987;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = -2797377095371372852LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = (short)-6026;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? -1815536153 : 640541812;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3579460212049113856ULL : 8495252266052654001ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1496511780 : -1347548070;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-12 : (signed char)-80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)24383 : (short)19023;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42472 : (unsigned short)47464;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (signed char)-28 : (signed char)58;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (signed char)-22 : (signed char)-88;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -288373179 : -1499869221;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
