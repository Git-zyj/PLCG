#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9135114637540363965LL;
unsigned int var_1 = 2485062677U;
short var_2 = (short)25963;
int var_3 = 1337047151;
int var_4 = -1861902815;
unsigned char var_7 = (unsigned char)230;
unsigned short var_8 = (unsigned short)36103;
unsigned char var_9 = (unsigned char)14;
short var_10 = (short)9909;
long long int var_11 = -336691829956836582LL;
unsigned char var_12 = (unsigned char)172;
signed char var_13 = (signed char)-88;
long long int var_14 = -1978887552004704445LL;
int var_15 = 731068738;
int var_17 = 2045687327;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 961482997U;
signed char var_20 = (signed char)120;
signed char var_21 = (signed char)76;
short var_22 = (short)3798;
unsigned short var_23 = (unsigned short)42597;
long long int var_24 = 8170007618696651745LL;
unsigned long long int var_25 = 12446277068051930176ULL;
signed char var_26 = (signed char)-14;
unsigned short var_27 = (unsigned short)60669;
unsigned char var_28 = (unsigned char)197;
unsigned char var_29 = (unsigned char)214;
unsigned char var_30 = (unsigned char)175;
int var_31 = -1268362520;
unsigned long long int var_32 = 8315459656497065682ULL;
long long int var_33 = -2956341689996096067LL;
int arr_0 [17] ;
unsigned char arr_2 [17] ;
int arr_5 [21] ;
unsigned short arr_6 [21] ;
unsigned long long int arr_7 [21] [21] [21] ;
unsigned char arr_8 [21] [21] ;
unsigned char arr_10 [21] [21] [21] [21] ;
unsigned int arr_11 [21] ;
unsigned long long int arr_12 [21] [21] [21] [21] ;
unsigned char arr_16 [21] [21] ;
unsigned short arr_19 [14] ;
signed char arr_22 [22] ;
signed char arr_23 [22] ;
unsigned long long int arr_4 [17] ;
int arr_9 [21] [21] [21] ;
unsigned char arr_13 [21] [21] ;
long long int arr_14 [21] [21] [21] [21] ;
unsigned short arr_17 [21] [21] ;
unsigned char arr_20 [14] ;
unsigned char arr_21 [14] ;
signed char arr_24 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -249668542;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1676002513 : 1315634564;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12870 : (unsigned short)46385;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8078204296584531560ULL : 9417699560585972149ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)240 : (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)205 : (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 667096245U : 3758477190U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 5841955854528687101ULL : 9164355299534400365ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)56 : (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41106 : (unsigned short)25322;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 17830593084902763722ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1224984249 : -382421020;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)158 : (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2327207608990772764LL : -3434495777440607564LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)46987 : (unsigned short)29561;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)165 : (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned char)122 : (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (signed char)-15;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
