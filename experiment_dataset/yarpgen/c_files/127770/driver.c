#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
long long int var_3 = 579523594207272843LL;
short var_4 = (short)-10782;
unsigned short var_5 = (unsigned short)6148;
short var_8 = (short)10155;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)4379;
unsigned short var_16 = (unsigned short)517;
unsigned long long int var_17 = 17803617092307599675ULL;
long long int var_18 = -7374335730886198900LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)13310;
unsigned char var_21 = (unsigned char)243;
long long int var_22 = -4778424943595147937LL;
short var_23 = (short)18932;
unsigned long long int var_24 = 5481307734949810566ULL;
unsigned long long int var_25 = 1208789604912095717ULL;
short var_26 = (short)-28821;
unsigned long long int var_27 = 6716084096814081005ULL;
long long int var_28 = 9209476174634312263LL;
int arr_0 [23] ;
unsigned long long int arr_3 [11] ;
unsigned short arr_4 [11] [11] ;
_Bool arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -887011416;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 5685163776152191823ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)1329;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
