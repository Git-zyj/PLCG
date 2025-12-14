#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 2315042991U;
int var_4 = 1205515871;
int var_8 = 685230623;
unsigned char var_9 = (unsigned char)226;
unsigned short var_12 = (unsigned short)25187;
long long int var_13 = 5962094397731867597LL;
unsigned char var_15 = (unsigned char)2;
short var_16 = (short)-12318;
int zero = 0;
unsigned short var_18 = (unsigned short)62918;
long long int var_19 = -2550707605151221351LL;
signed char var_20 = (signed char)115;
short var_21 = (short)21467;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 10661489828975203853ULL;
long long int var_24 = -8333256865824096458LL;
long long int var_25 = 5022493118692445228LL;
short var_26 = (short)19312;
unsigned long long int var_27 = 6629877937696251777ULL;
unsigned int var_28 = 1033078039U;
unsigned short var_29 = (unsigned short)24002;
unsigned short var_30 = (unsigned short)2669;
unsigned short var_31 = (unsigned short)64210;
signed char var_32 = (signed char)52;
unsigned char var_33 = (unsigned char)210;
_Bool var_34 = (_Bool)0;
unsigned char var_35 = (unsigned char)90;
unsigned short var_36 = (unsigned short)58910;
long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
_Bool arr_2 [21] [21] ;
short arr_5 [20] [20] ;
long long int arr_13 [21] [21] ;
long long int arr_17 [11] [11] ;
_Bool arr_18 [25] ;
short arr_22 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -2077016008011376008LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 12470891301453314510ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-6758;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = -2936447884324459685LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = 8200403207813291116LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)4429 : (short)13641;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
