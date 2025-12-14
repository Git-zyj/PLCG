#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned char var_1 = (unsigned char)7;
int var_2 = -1670799801;
unsigned short var_7 = (unsigned short)6784;
int var_8 = 489853827;
unsigned char var_9 = (unsigned char)189;
short var_10 = (short)-28197;
unsigned short var_11 = (unsigned short)35912;
long long int var_13 = 7707658885092137953LL;
int zero = 0;
unsigned char var_15 = (unsigned char)145;
_Bool var_16 = (_Bool)0;
int var_17 = 1840605499;
unsigned char var_18 = (unsigned char)5;
int var_19 = -225598124;
_Bool var_20 = (_Bool)0;
int var_21 = -704998582;
_Bool var_22 = (_Bool)0;
int var_23 = -1918467847;
_Bool var_24 = (_Bool)0;
int var_25 = -819328149;
int var_26 = 1646893127;
int var_27 = -582028618;
unsigned int var_28 = 278005357U;
unsigned short var_29 = (unsigned short)34441;
long long int arr_0 [16] ;
_Bool arr_1 [16] ;
_Bool arr_3 [18] [18] ;
unsigned char arr_4 [18] ;
unsigned char arr_5 [18] [18] ;
unsigned char arr_6 [18] [18] ;
_Bool arr_7 [24] ;
long long int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3171199351553553883LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -3676842175849524691LL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
