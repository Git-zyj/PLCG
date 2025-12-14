#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3460202451466144725LL;
int var_2 = -1025330774;
long long int var_4 = -8767580101747611549LL;
short var_7 = (short)-7408;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1602636271U;
long long int var_10 = -2246188807880333067LL;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 4240407315U;
unsigned int var_14 = 2175036780U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2373111767U;
unsigned short var_17 = (unsigned short)14719;
int zero = 0;
int var_19 = -1185263995;
unsigned int var_20 = 577978466U;
unsigned int var_21 = 1254702004U;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-43;
unsigned long long int var_24 = 8246898668541657257ULL;
signed char var_25 = (signed char)54;
int var_26 = -313097964;
short var_27 = (short)-23965;
signed char var_28 = (signed char)79;
_Bool var_29 = (_Bool)0;
signed char var_30 = (signed char)-20;
_Bool var_31 = (_Bool)1;
unsigned short var_32 = (unsigned short)56365;
short var_33 = (short)-5229;
_Bool var_34 = (_Bool)0;
int var_35 = -683071066;
long long int var_36 = 7292323835894261337LL;
unsigned int var_37 = 3914264287U;
unsigned short arr_0 [12] [12] ;
short arr_2 [14] ;
_Bool arr_3 [14] ;
unsigned int arr_7 [23] ;
int arr_13 [23] [23] [23] ;
unsigned int arr_17 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)38823;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)32241;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 1055088672U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1591496231 : -1962892208;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = 180029010U;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
