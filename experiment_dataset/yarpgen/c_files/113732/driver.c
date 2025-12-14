#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13529;
unsigned int var_1 = 1072698935U;
int var_2 = 1963446765;
signed char var_4 = (signed char)39;
int var_5 = 292226852;
unsigned int var_6 = 1801826248U;
int var_7 = 1590673168;
unsigned int var_10 = 2626329149U;
signed char var_13 = (signed char)41;
short var_14 = (short)23537;
unsigned int var_15 = 171666688U;
unsigned char var_17 = (unsigned char)126;
int zero = 0;
unsigned short var_18 = (unsigned short)59019;
signed char var_19 = (signed char)-118;
_Bool var_20 = (_Bool)1;
int var_21 = -1340727962;
signed char var_22 = (signed char)79;
short var_23 = (short)-14396;
unsigned short var_24 = (unsigned short)4919;
signed char var_25 = (signed char)77;
unsigned char var_26 = (unsigned char)180;
signed char var_27 = (signed char)97;
unsigned int var_28 = 273679414U;
unsigned short var_29 = (unsigned short)54027;
unsigned char var_30 = (unsigned char)2;
unsigned int arr_2 [25] ;
signed char arr_4 [25] ;
unsigned short arr_9 [25] ;
long long int arr_5 [25] ;
unsigned long long int arr_8 [24] ;
unsigned int arr_11 [25] ;
unsigned short arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1792097470U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned short)64300;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -6733853047612133548LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 15131527032558861402ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 3365606657U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned short)21967;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
