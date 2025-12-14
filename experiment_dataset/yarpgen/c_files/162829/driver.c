#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25047;
unsigned char var_7 = (unsigned char)164;
int var_8 = 1226208150;
signed char var_10 = (signed char)-100;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
long long int var_14 = 7759340303491686988LL;
long long int var_16 = 7884064712138319379LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)7927;
long long int var_20 = -1294968844923430031LL;
short var_21 = (short)-27771;
signed char arr_1 [16] ;
long long int arr_4 [15] ;
unsigned char arr_2 [16] ;
unsigned char arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -1713346376945785152LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)71;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
