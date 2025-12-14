#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1032382211772479981LL;
signed char var_2 = (signed char)-14;
unsigned long long int var_3 = 17406592533194896550ULL;
unsigned long long int var_5 = 16626315141616146836ULL;
long long int var_7 = -7744864426647272208LL;
long long int var_9 = 7692246641167249054LL;
long long int var_11 = -4826208384455334859LL;
unsigned char var_12 = (unsigned char)133;
unsigned short var_14 = (unsigned short)46521;
int zero = 0;
signed char var_15 = (signed char)67;
unsigned long long int var_16 = 5942182964908431232ULL;
short var_17 = (short)-1581;
short var_18 = (short)28483;
unsigned short var_19 = (unsigned short)10637;
signed char var_20 = (signed char)-65;
signed char var_21 = (signed char)-34;
int var_22 = -1638908215;
int var_23 = 442869083;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)65;
signed char var_26 = (signed char)-26;
short arr_0 [19] ;
unsigned char arr_2 [19] [19] ;
signed char arr_3 [19] [19] ;
long long int arr_4 [19] [19] [19] ;
unsigned char arr_5 [19] [19] [19] ;
unsigned char arr_6 [19] [19] [19] ;
unsigned char arr_7 [19] ;
signed char arr_9 [12] ;
unsigned char arr_16 [12] ;
signed char arr_19 [12] [12] ;
long long int arr_30 [25] ;
int arr_31 [25] ;
signed char arr_8 [19] [19] [19] ;
unsigned long long int arr_13 [12] [12] ;
short arr_28 [12] ;
unsigned long long int arr_29 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)3968;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -4687363671330992656LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = -2687552403134593743LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = -198158244;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 17366504604510040306ULL : 10613784217820206180ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (short)12158 : (short)-24079;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 11879396731611422978ULL : 5617820850041129011ULL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
