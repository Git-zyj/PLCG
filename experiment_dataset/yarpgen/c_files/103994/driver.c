#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11427335855901772697ULL;
long long int var_4 = -3642783751899990538LL;
short var_7 = (short)21369;
unsigned short var_8 = (unsigned short)6730;
short var_12 = (short)19019;
unsigned short var_13 = (unsigned short)40727;
int zero = 0;
unsigned long long int var_15 = 6658202366751383937ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 5278133029932659003LL;
unsigned long long int arr_0 [18] ;
short arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 9328358510837208859ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)-26915;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
