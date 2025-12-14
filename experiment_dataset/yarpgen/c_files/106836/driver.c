#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6260285055520959759LL;
int var_3 = 454226613;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 10171811969377400831ULL;
short var_8 = (short)31503;
unsigned char var_9 = (unsigned char)65;
unsigned long long int var_10 = 10093978998636959232ULL;
unsigned long long int var_12 = 18281286609535646593ULL;
unsigned int var_14 = 1684411769U;
unsigned long long int var_15 = 7940822403946215036ULL;
int zero = 0;
unsigned int var_16 = 1509395576U;
int var_17 = 333686068;
unsigned long long int var_18 = 4396801405178533471ULL;
unsigned int var_19 = 1488794746U;
int var_20 = -983258475;
unsigned long long int var_21 = 11405733691130802606ULL;
unsigned long long int var_22 = 6612194035895918090ULL;
unsigned long long int var_23 = 13951314895462577407ULL;
signed char var_24 = (signed char)-68;
long long int var_25 = -8816282476213716578LL;
unsigned long long int var_26 = 7208152212699971526ULL;
unsigned int var_27 = 3184560988U;
unsigned int arr_0 [25] [25] ;
unsigned int arr_1 [25] [25] ;
unsigned int arr_2 [25] [25] ;
unsigned long long int arr_4 [25] ;
unsigned int arr_15 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 1705112933U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 258136158U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 725875792U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 12833320647416498399ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = 3751750992U;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
