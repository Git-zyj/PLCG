#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 3965422989962398578ULL;
unsigned short var_4 = (unsigned short)48981;
short var_6 = (short)1594;
int var_9 = 57281830;
unsigned long long int var_10 = 13851564793444904023ULL;
unsigned char var_11 = (unsigned char)229;
_Bool var_12 = (_Bool)1;
int var_13 = 725914941;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)131;
unsigned int var_19 = 1828157097U;
long long int var_20 = -304815023542622190LL;
unsigned int var_21 = 2236673305U;
int var_22 = 632532917;
unsigned long long int var_23 = 8173481142367453157ULL;
unsigned long long int arr_1 [22] [22] ;
unsigned short arr_2 [22] ;
unsigned int arr_4 [22] ;
unsigned int arr_5 [22] ;
int arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 17596496719375905991ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)12064;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 2894810859U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 1753823954U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = -1537453431;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
