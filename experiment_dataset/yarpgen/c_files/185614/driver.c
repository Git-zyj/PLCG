#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
unsigned short var_2 = (unsigned short)64076;
unsigned short var_4 = (unsigned short)55018;
short var_6 = (short)3123;
unsigned short var_7 = (unsigned short)36613;
unsigned char var_11 = (unsigned char)135;
int zero = 0;
unsigned char var_12 = (unsigned char)47;
unsigned long long int var_13 = 10963322968551064826ULL;
int var_14 = 272029287;
long long int var_15 = 1931613855400317447LL;
unsigned short var_16 = (unsigned short)42084;
signed char var_17 = (signed char)69;
unsigned char arr_0 [19] ;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 7778001111975704862ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
