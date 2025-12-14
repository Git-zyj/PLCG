#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13882313397131175122ULL;
short var_4 = (short)18079;
unsigned char var_5 = (unsigned char)255;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-7454;
long long int var_15 = -2766925544173987297LL;
int var_16 = -873199400;
unsigned char var_17 = (unsigned char)49;
int zero = 0;
unsigned int var_18 = 2025613643U;
unsigned char var_19 = (unsigned char)102;
unsigned int var_20 = 1734452185U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2616449887U;
unsigned short arr_0 [10] ;
unsigned int arr_5 [10] ;
unsigned long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)9729;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 3126949395U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 15249468864815296568ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
