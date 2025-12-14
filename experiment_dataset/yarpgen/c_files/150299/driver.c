#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6603;
long long int var_2 = 7328647547158030267LL;
unsigned short var_3 = (unsigned short)51714;
unsigned char var_4 = (unsigned char)45;
unsigned char var_5 = (unsigned char)247;
short var_6 = (short)-20999;
signed char var_7 = (signed char)-125;
unsigned char var_10 = (unsigned char)155;
long long int var_11 = 2015947492465845265LL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)11849;
short var_14 = (short)-11070;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)-4159;
unsigned char var_17 = (unsigned char)249;
long long int var_18 = -2420381279988282607LL;
unsigned char var_19 = (unsigned char)110;
signed char var_20 = (signed char)-57;
unsigned char var_21 = (unsigned char)63;
_Bool var_22 = (_Bool)0;
long long int var_23 = -2212338715073462121LL;
long long int var_24 = -7534976811494511949LL;
short var_25 = (short)6115;
signed char var_26 = (signed char)72;
int var_27 = -1693490600;
unsigned int var_28 = 1094553675U;
unsigned int var_29 = 1527834513U;
int var_30 = -976244509;
unsigned char arr_0 [19] [19] ;
short arr_1 [19] [19] ;
signed char arr_2 [19] [19] ;
unsigned long long int arr_3 [19] [19] ;
short arr_4 [19] [19] ;
unsigned char arr_5 [19] [19] [19] ;
_Bool arr_8 [12] [12] ;
unsigned short arr_13 [12] ;
int arr_16 [12] [12] ;
unsigned long long int arr_19 [12] ;
unsigned short arr_21 [12] [12] ;
short arr_28 [12] ;
unsigned long long int arr_6 [19] [19] ;
unsigned long long int arr_9 [12] ;
long long int arr_10 [12] ;
int arr_17 [12] ;
unsigned int arr_18 [12] [12] ;
signed char arr_23 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-14071;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 16526473638993997868ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)1627;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (unsigned short)33519;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = -1425499459;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 14290631722154512498ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)16522;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = (short)5465;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 2337112253399413811ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 4779196955746688523ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = -6819752970309962649LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 873662782;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = 1288575348U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)-17;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
