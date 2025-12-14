#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28444;
unsigned char var_2 = (unsigned char)111;
unsigned int var_3 = 1426115286U;
long long int var_4 = -3404831036123865388LL;
unsigned short var_5 = (unsigned short)58669;
long long int var_6 = 8478271729731494636LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -2705157743381877283LL;
unsigned char var_9 = (unsigned char)11;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 3794969245207009899ULL;
int var_12 = 1395955308;
short var_13 = (short)-30886;
signed char var_14 = (signed char)-31;
short var_15 = (short)22607;
unsigned char arr_3 [22] ;
long long int arr_4 [22] ;
_Bool arr_7 [22] ;
long long int arr_12 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -2722800038356552737LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -8697238142780019302LL : 2189768690872243320LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
