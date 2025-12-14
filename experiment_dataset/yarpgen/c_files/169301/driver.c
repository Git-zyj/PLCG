#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 320321861;
long long int var_1 = -5194273948722343090LL;
int var_2 = -1918642420;
unsigned long long int var_3 = 16788699607122180158ULL;
unsigned short var_5 = (unsigned short)5534;
short var_6 = (short)23762;
unsigned short var_7 = (unsigned short)65354;
short var_10 = (short)2837;
short var_11 = (short)-3380;
unsigned short var_12 = (unsigned short)14038;
int zero = 0;
unsigned short var_13 = (unsigned short)54334;
signed char var_14 = (signed char)-105;
long long int var_15 = 3736654207614622729LL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -1280865728317692203LL;
short var_19 = (short)-31539;
short var_20 = (short)22765;
unsigned int var_21 = 1022086053U;
unsigned int var_22 = 4250529107U;
unsigned short var_23 = (unsigned short)34383;
short var_24 = (short)650;
unsigned short var_25 = (unsigned short)27831;
unsigned int var_26 = 727756035U;
int var_27 = 1724866945;
_Bool arr_18 [23] ;
unsigned long long int arr_19 [23] [23] [23] [23] ;
unsigned short arr_20 [23] [23] [23] ;
signed char arr_23 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 17626916835856910953ULL : 11943447912698927721ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)22567 : (unsigned short)55874;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (signed char)-50 : (signed char)20;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
