#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3019517526U;
long long int var_1 = 6914652996999569228LL;
unsigned short var_2 = (unsigned short)6813;
int var_3 = -1471533967;
int var_4 = -1321781279;
unsigned long long int var_5 = 2994113353195151662ULL;
int var_6 = 2042577900;
long long int var_8 = 5492779573354923110LL;
long long int var_9 = 168106781011393676LL;
short var_10 = (short)-27713;
_Bool var_11 = (_Bool)1;
int var_13 = 765771871;
unsigned int var_14 = 1417794242U;
unsigned long long int var_15 = 12382894543298383814ULL;
long long int var_16 = -2248862657978704926LL;
int zero = 0;
long long int var_17 = -712981452566897275LL;
long long int var_18 = 5279990712064535578LL;
unsigned long long int var_19 = 8719937776431710163ULL;
unsigned int var_20 = 3032610741U;
int var_21 = -1829741888;
int var_22 = -1684261102;
int var_23 = -923960542;
short var_24 = (short)-27405;
unsigned int var_25 = 950464446U;
unsigned int var_26 = 3883676969U;
short arr_2 [10] ;
unsigned long long int arr_11 [10] ;
short arr_15 [10] ;
int arr_16 [10] [10] [10] [10] ;
long long int arr_17 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-32390;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 4979122915462144107ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)-30957 : (short)-4921;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1510541573 : 1627766034;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = -2421544599708830454LL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
