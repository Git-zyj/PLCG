#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1569229604;
unsigned short var_5 = (unsigned short)50366;
int var_8 = 1335089423;
int zero = 0;
short var_14 = (short)32722;
unsigned char var_15 = (unsigned char)53;
unsigned char var_16 = (unsigned char)115;
unsigned char var_17 = (unsigned char)236;
unsigned int var_18 = 475422500U;
short arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-9167;
}

void checksum() {
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
