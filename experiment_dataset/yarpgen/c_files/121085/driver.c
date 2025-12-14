#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-111;
short var_5 = (short)21542;
int var_12 = -1435183300;
signed char var_13 = (signed char)72;
int zero = 0;
int var_15 = 662475389;
int var_16 = 1802254064;
unsigned int var_17 = 2302343269U;
unsigned long long int var_18 = 6507977099504129546ULL;
unsigned char var_19 = (unsigned char)49;
short arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)23056;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
