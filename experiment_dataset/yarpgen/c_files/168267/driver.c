#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6093519634506320454LL;
long long int var_3 = 4244885949500495625LL;
short var_5 = (short)-31231;
short var_7 = (short)-4362;
int zero = 0;
unsigned short var_11 = (unsigned short)8429;
unsigned long long int var_12 = 13411300847386409454ULL;
signed char var_13 = (signed char)34;
unsigned char var_14 = (unsigned char)4;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)60394;
long long int var_17 = -6683889153292306214LL;
unsigned char var_18 = (unsigned char)94;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)30904;
short arr_0 [25] ;
signed char arr_1 [25] [25] ;
long long int arr_4 [13] ;
unsigned int arr_5 [13] [13] ;
unsigned char arr_10 [17] ;
unsigned short arr_12 [17] ;
_Bool arr_2 [25] [25] ;
long long int arr_3 [25] ;
_Bool arr_7 [13] ;
unsigned char arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)17897;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 7972547888392752743LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 370931136U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (unsigned short)37441;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -3116227397759752828LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)79 : (unsigned char)228;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
