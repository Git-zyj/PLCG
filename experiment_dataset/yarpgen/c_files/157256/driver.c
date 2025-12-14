#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-122;
unsigned short var_5 = (unsigned short)18678;
unsigned short var_6 = (unsigned short)65415;
unsigned char var_7 = (unsigned char)225;
int var_8 = -1526698342;
unsigned int var_9 = 715225699U;
int zero = 0;
signed char var_10 = (signed char)51;
unsigned char var_11 = (unsigned char)21;
int var_12 = 2067412876;
int var_13 = 123200570;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
long long int arr_0 [11] ;
signed char arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -210321478433516657LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)115;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
