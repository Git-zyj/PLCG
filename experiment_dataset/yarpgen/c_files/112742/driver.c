#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
int var_2 = 1340412022;
int var_3 = -2084098362;
unsigned int var_4 = 3484358909U;
long long int var_5 = 283310815384744619LL;
unsigned short var_6 = (unsigned short)35831;
unsigned char var_7 = (unsigned char)96;
long long int var_10 = -7851537886278667749LL;
short var_11 = (short)-12157;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -1409600111;
unsigned short var_15 = (unsigned short)2741;
unsigned int var_16 = 4095335607U;
int var_17 = 1753433;
unsigned long long int var_18 = 5850920253087409717ULL;
unsigned long long int var_19 = 8589611368331868652ULL;
int var_20 = -1962915034;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 16875721855498954233ULL;
unsigned long long int var_23 = 14486712800753478429ULL;
int var_24 = -1735484254;
long long int var_25 = -6706792852872411887LL;
signed char var_26 = (signed char)-34;
unsigned long long int var_27 = 6729826463418105431ULL;
int arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
long long int arr_2 [21] ;
unsigned long long int arr_3 [21] [21] ;
_Bool arr_5 [21] ;
int arr_6 [21] ;
int arr_7 [21] [21] ;
_Bool arr_8 [21] ;
signed char arr_9 [21] [21] [21] [21] ;
_Bool arr_10 [21] ;
unsigned int arr_11 [21] ;
long long int arr_16 [21] ;
signed char arr_17 [21] [21] [21] ;
unsigned int arr_18 [21] [21] [21] ;
long long int arr_21 [21] [21] [21] ;
unsigned long long int arr_28 [20] ;
unsigned int arr_12 [21] ;
_Bool arr_13 [21] [21] ;
long long int arr_14 [21] [21] [21] ;
short arr_20 [21] [21] ;
_Bool arr_24 [21] [21] [21] [21] ;
long long int arr_25 [21] ;
unsigned char arr_26 [21] ;
_Bool arr_29 [20] ;
unsigned int arr_30 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 7589114;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)4994;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 4154236010417592137LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 3165958140473794305ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 847564393;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = -1495716776;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-4 : (signed char)-81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 369720480U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = 6714519247497477172LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 31108746U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = -5892041276476966463LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = 15088981084526877373ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1839856957U : 28984463U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -6591861476531600694LL : -2155365789445300756LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-26229;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = 8659223340443134452LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = 1643951416U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
