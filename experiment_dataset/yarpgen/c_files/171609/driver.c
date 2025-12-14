#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5956240137691474091LL;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 3873702922U;
long long int var_9 = 2554837237953006484LL;
unsigned long long int var_10 = 8953986022679097363ULL;
unsigned int var_11 = 1269840203U;
long long int var_12 = -7846118959901398132LL;
int zero = 0;
unsigned int var_13 = 420400696U;
long long int var_14 = 6943789231287541856LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)2583;
_Bool var_17 = (_Bool)1;
long long int var_18 = 4290318115445476837LL;
unsigned int var_19 = 233071085U;
short var_20 = (short)-25439;
long long int var_21 = 4109827071033404766LL;
long long int var_22 = 776584986286185214LL;
unsigned long long int var_23 = 12775650745258288579ULL;
signed char var_24 = (signed char)60;
short var_25 = (short)-11095;
_Bool var_26 = (_Bool)1;
unsigned char arr_1 [19] [19] ;
long long int arr_3 [20] [20] ;
_Bool arr_7 [22] ;
unsigned char arr_8 [22] ;
signed char arr_9 [22] ;
unsigned int arr_10 [22] [22] [22] ;
signed char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 200004949458225014LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3405570807U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)48;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
