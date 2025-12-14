#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1178002399;
unsigned char var_2 = (unsigned char)138;
unsigned long long int var_3 = 6250392342654320213ULL;
unsigned long long int var_4 = 9603708893360497794ULL;
signed char var_5 = (signed char)119;
unsigned long long int var_6 = 15088649966929178659ULL;
unsigned short var_7 = (unsigned short)41313;
unsigned char var_8 = (unsigned char)59;
unsigned short var_9 = (unsigned short)57831;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -6402502094222122181LL;
int var_12 = 1816595845;
unsigned short var_13 = (unsigned short)12775;
int var_14 = 1675261401;
unsigned long long int var_15 = 15380582840341371825ULL;
unsigned char var_16 = (unsigned char)210;
unsigned char var_17 = (unsigned char)42;
int var_18 = -338765473;
unsigned short var_19 = (unsigned short)36038;
unsigned int var_20 = 3624782966U;
long long int var_21 = 702389009899653875LL;
int var_22 = 1939331706;
unsigned char var_23 = (unsigned char)253;
unsigned long long int var_24 = 16522556967083187438ULL;
unsigned char var_25 = (unsigned char)47;
long long int var_26 = -3972207448757456198LL;
_Bool var_27 = (_Bool)0;
long long int var_28 = 4474236911795857638LL;
signed char var_29 = (signed char)-70;
int arr_0 [15] ;
long long int arr_1 [15] [15] ;
long long int arr_4 [15] [15] [15] ;
_Bool arr_5 [15] [15] [15] [15] ;
int arr_8 [15] [15] [15] [15] ;
unsigned int arr_10 [15] [15] [15] [15] [15] ;
unsigned char arr_14 [15] [15] [15] [15] ;
_Bool arr_22 [19] ;
signed char arr_23 [19] ;
unsigned long long int arr_24 [19] ;
long long int arr_15 [15] ;
signed char arr_26 [19] ;
unsigned char arr_27 [19] ;
long long int arr_33 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -1844653517;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 8392861058876300251LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 203754190420772825LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 857127638;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 1634184916U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = 8920725546385006360ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 6634234327400749331LL : -8091748672409973019LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_33 [i_0] = 5663598962808420003LL;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
