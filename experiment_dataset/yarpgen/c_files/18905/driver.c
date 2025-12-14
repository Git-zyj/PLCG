#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8043133575839275265LL;
unsigned long long int var_1 = 14890459943408668856ULL;
unsigned int var_3 = 3681677369U;
unsigned short var_4 = (unsigned short)43446;
unsigned short var_6 = (unsigned short)51688;
signed char var_7 = (signed char)99;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 8711902749499241665ULL;
_Bool var_10 = (_Bool)0;
int var_11 = 339595080;
unsigned int var_12 = 1371370824U;
short var_13 = (short)-29670;
int zero = 0;
int var_14 = -34533560;
int var_15 = 688995796;
unsigned short var_16 = (unsigned short)13100;
int var_17 = 181586878;
int var_18 = 743042932;
short var_19 = (short)-561;
unsigned short var_20 = (unsigned short)25039;
short var_21 = (short)18604;
unsigned char var_22 = (unsigned char)44;
unsigned int var_23 = 2622774679U;
unsigned short var_24 = (unsigned short)61518;
long long int var_25 = -4487098177723592184LL;
unsigned short var_26 = (unsigned short)5932;
_Bool var_27 = (_Bool)0;
long long int var_28 = 7653983256942824510LL;
int var_29 = 1589748106;
unsigned short var_30 = (unsigned short)46332;
unsigned short var_31 = (unsigned short)49496;
long long int arr_2 [19] [19] ;
unsigned long long int arr_16 [11] [11] [11] ;
short arr_29 [11] [11] ;
unsigned int arr_30 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 2668700818440138720LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7276703768940564137ULL : 13631644428247106745ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)16111 : (short)-2399;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1293456906U : 1913254538U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
