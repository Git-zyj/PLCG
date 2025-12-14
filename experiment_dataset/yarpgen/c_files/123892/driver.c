#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4583404453981312166ULL;
unsigned long long int var_1 = 7975360187637485156ULL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)29232;
unsigned long long int var_4 = 16562748538972417076ULL;
unsigned long long int var_5 = 15905399148231962282ULL;
unsigned short var_6 = (unsigned short)23903;
unsigned short var_7 = (unsigned short)26751;
unsigned long long int var_8 = 2216784808062226000ULL;
unsigned short var_9 = (unsigned short)20911;
unsigned short var_10 = (unsigned short)11939;
long long int var_11 = 6537401965015636978LL;
unsigned char var_12 = (unsigned char)217;
long long int var_13 = -5228067483830736279LL;
unsigned int var_14 = 1252960698U;
long long int var_15 = 7599617596587107184LL;
long long int var_16 = 1303533618250068573LL;
int zero = 0;
long long int var_17 = -5948115503336176608LL;
unsigned long long int var_18 = 6667338844061457811ULL;
short var_19 = (short)25456;
short var_20 = (short)-20984;
int var_21 = -917988834;
signed char var_22 = (signed char)6;
short var_23 = (short)-31106;
signed char var_24 = (signed char)126;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-9;
short var_27 = (short)14928;
unsigned char var_28 = (unsigned char)78;
unsigned short var_29 = (unsigned short)11249;
unsigned char var_30 = (unsigned char)3;
signed char var_31 = (signed char)77;
unsigned long long int var_32 = 1789283912733477447ULL;
unsigned int var_33 = 382814994U;
_Bool var_34 = (_Bool)1;
unsigned long long int arr_0 [10] ;
unsigned short arr_3 [25] ;
unsigned long long int arr_4 [25] ;
int arr_5 [25] [25] ;
unsigned short arr_6 [25] [25] ;
unsigned long long int arr_9 [22] ;
unsigned long long int arr_11 [22] [22] ;
int arr_15 [20] [20] ;
unsigned int arr_28 [20] [20] ;
unsigned long long int arr_29 [20] ;
unsigned short arr_2 [10] [10] ;
unsigned short arr_7 [25] [25] ;
int arr_8 [25] [25] ;
unsigned char arr_12 [22] [22] ;
unsigned long long int arr_13 [22] ;
short arr_19 [20] ;
unsigned long long int arr_22 [20] ;
short arr_31 [20] ;
unsigned long long int arr_32 [20] [20] [20] ;
short arr_33 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 6130175007607827752ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)47555;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 286731858106391549ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -173499239;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)4948;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 2339091797515785360ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 17615106421122542343ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = -1235960927;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? 3967333285U : 3383033663U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = 13127308488316391137ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)33124;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)59910;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = -208603416;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 1314752459009801487ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)-5824 : (short)-13590;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 4554687482669321943ULL : 1857208761965923800ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (short)-30344 : (short)31216;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7171710212648555490ULL : 18441324173055992117ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_33 [i_0] [i_1] = (short)3710;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
