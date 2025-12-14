#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9242;
unsigned int var_1 = 3284766839U;
unsigned long long int var_2 = 8615828824432120164ULL;
unsigned short var_6 = (unsigned short)65129;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)2;
int zero = 0;
short var_11 = (short)14712;
_Bool var_12 = (_Bool)1;
int var_13 = -1562877609;
signed char var_14 = (signed char)122;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)39431;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)46674;
int arr_4 [14] [14] ;
_Bool arr_10 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1102666030;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
