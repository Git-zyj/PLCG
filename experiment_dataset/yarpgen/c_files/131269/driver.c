#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -557653865;
unsigned long long int var_8 = 13292878213328572445ULL;
unsigned short var_10 = (unsigned short)50874;
signed char var_14 = (signed char)115;
short var_16 = (short)-668;
int zero = 0;
unsigned char var_17 = (unsigned char)226;
unsigned int var_18 = 3574175617U;
unsigned char var_19 = (unsigned char)106;
unsigned int var_20 = 2897204046U;
int arr_0 [25] [25] ;
unsigned short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 244266539;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38462 : (unsigned short)17159;
}

void checksum() {
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
