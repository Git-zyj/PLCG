#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -713197382860323858LL;
unsigned short var_1 = (unsigned short)8076;
unsigned long long int var_3 = 16918478573948653929ULL;
unsigned int var_4 = 394562566U;
short var_5 = (short)-24261;
unsigned short var_7 = (unsigned short)48434;
long long int var_8 = -3633864731341189980LL;
unsigned char var_12 = (unsigned char)145;
short var_14 = (short)5213;
int zero = 0;
short var_15 = (short)2255;
unsigned long long int var_16 = 7762451218851762409ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 9538422817407280742ULL;
signed char var_19 = (signed char)59;
long long int var_20 = -8198795863265354865LL;
long long int var_21 = -497375833983121766LL;
short var_22 = (short)31597;
unsigned short var_23 = (unsigned short)25246;
unsigned int var_24 = 3509085334U;
unsigned long long int var_25 = 12974022742524879611ULL;
int arr_0 [25] ;
long long int arr_1 [25] ;
unsigned long long int arr_2 [25] [25] [25] ;
long long int arr_4 [25] [25] [25] ;
unsigned short arr_5 [25] ;
long long int arr_7 [25] ;
long long int arr_21 [24] [24] [24] [24] ;
unsigned int arr_6 [25] [25] [25] ;
unsigned short arr_15 [24] [24] [24] ;
unsigned short arr_23 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -745448564 : -1144634041;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -5510954511016435199LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 16589674084119673261ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2487613990524126696LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50358 : (unsigned short)36575;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 2939020023069146163LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -20173876843092848LL : 8298106492366653017LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1059560735U : 2963193573U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)25149 : (unsigned short)51354;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)21638 : (unsigned short)43193;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
