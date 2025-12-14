#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6277445628104924707LL;
int var_1 = 201899813;
unsigned long long int var_3 = 9254249524068969066ULL;
unsigned int var_4 = 3118841468U;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-13872;
int var_14 = -1064914151;
unsigned char var_15 = (unsigned char)19;
int var_16 = -396438115;
long long int var_17 = -8487538917124712119LL;
unsigned int var_18 = 3606679499U;
int zero = 0;
unsigned long long int var_19 = 12383962741557790954ULL;
short var_20 = (short)2550;
short var_21 = (short)11770;
unsigned long long int var_22 = 1334606885961448517ULL;
int var_23 = 65411572;
unsigned char var_24 = (unsigned char)241;
unsigned int var_25 = 101173641U;
int arr_0 [24] ;
long long int arr_1 [24] [24] ;
unsigned short arr_7 [10] [10] ;
unsigned short arr_10 [25] [25] ;
int arr_2 [24] ;
_Bool arr_5 [10] ;
unsigned long long int arr_6 [10] [10] ;
signed char arr_9 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 630616949;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 747380490845958787LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)54709;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)63438;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -1401168634;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 7505589022065146543ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)70;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
