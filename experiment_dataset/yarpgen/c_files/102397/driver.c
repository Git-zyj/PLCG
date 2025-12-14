#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22647;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)122;
long long int var_10 = -7669545512259577016LL;
unsigned short var_14 = (unsigned short)24721;
int zero = 0;
long long int var_15 = 2524399144243428011LL;
long long int var_16 = 9011753149000087603LL;
long long int var_17 = -5216763255707493304LL;
unsigned short var_18 = (unsigned short)13899;
unsigned int var_19 = 474709061U;
unsigned short var_20 = (unsigned short)24294;
unsigned int var_21 = 207239384U;
int var_22 = -230783528;
long long int var_23 = 5410663147395145728LL;
_Bool var_24 = (_Bool)0;
long long int var_25 = 3459706495019026947LL;
unsigned int arr_0 [17] ;
long long int arr_5 [17] ;
unsigned short arr_11 [17] ;
_Bool arr_13 [17] [17] ;
_Bool arr_6 [17] [17] ;
_Bool arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1921603862U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 2283320425890391757LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned short)12014;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
