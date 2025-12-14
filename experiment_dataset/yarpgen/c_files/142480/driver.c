#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)36190;
unsigned long long int var_7 = 6562771607123690131ULL;
_Bool var_8 = (_Bool)0;
long long int var_11 = -1876426949096000441LL;
short var_13 = (short)22138;
long long int var_14 = 3714437210861007003LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 5949198295920827668LL;
signed char var_19 = (signed char)35;
int zero = 0;
long long int var_20 = -2631833053667761278LL;
unsigned short var_21 = (unsigned short)3525;
int var_22 = 1910894665;
long long int var_23 = -7298798382572813459LL;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-43;
unsigned long long int arr_0 [23] [23] ;
long long int arr_1 [23] ;
signed char arr_3 [23] ;
signed char arr_6 [23] ;
signed char arr_7 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1488037564565908148ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -3404923521178809756LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-99 : (signed char)-4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)6 : (signed char)-57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-86;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
