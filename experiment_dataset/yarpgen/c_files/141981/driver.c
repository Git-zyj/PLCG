#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2296196864U;
unsigned int var_1 = 224350563U;
unsigned short var_2 = (unsigned short)64589;
unsigned int var_4 = 4035454765U;
unsigned long long int var_7 = 12677103761976530014ULL;
unsigned short var_8 = (unsigned short)41296;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)55147;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)63224;
unsigned short var_16 = (unsigned short)6916;
short var_17 = (short)-16441;
unsigned long long int var_18 = 504682383263210303ULL;
unsigned short var_19 = (unsigned short)5243;
unsigned int var_20 = 3811729611U;
unsigned short arr_0 [19] ;
unsigned char arr_1 [19] ;
long long int arr_2 [19] ;
unsigned short arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)28700;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -4771659429570066414LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)54323;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
