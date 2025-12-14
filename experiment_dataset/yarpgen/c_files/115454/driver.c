#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2327620053U;
unsigned long long int var_2 = 1706019412880455736ULL;
unsigned short var_5 = (unsigned short)29002;
unsigned long long int var_7 = 8025377015254083352ULL;
long long int var_10 = -5148624506902187204LL;
unsigned char var_11 = (unsigned char)49;
unsigned char var_13 = (unsigned char)237;
int zero = 0;
unsigned char var_20 = (unsigned char)99;
signed char var_21 = (signed char)32;
int var_22 = -1512142913;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-79;
unsigned int var_25 = 458122703U;
unsigned long long int var_26 = 15210336434536985804ULL;
signed char var_27 = (signed char)-56;
short var_28 = (short)13755;
unsigned short var_29 = (unsigned short)12079;
signed char arr_0 [21] ;
unsigned char arr_1 [21] ;
signed char arr_5 [14] [14] ;
short arr_7 [14] ;
int arr_9 [14] ;
unsigned short arr_12 [14] [14] [14] ;
unsigned char arr_2 [21] ;
unsigned char arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (short)-24323;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1855935836 : 47667992;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)14553 : (unsigned short)12400;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (unsigned char)66;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
