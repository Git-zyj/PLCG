#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43342;
unsigned short var_4 = (unsigned short)13580;
int var_8 = -1738816088;
unsigned int var_9 = 41062448U;
unsigned int var_10 = 2586227118U;
unsigned int var_13 = 1925648158U;
int zero = 0;
short var_15 = (short)-2637;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1881114944U;
unsigned short var_18 = (unsigned short)21796;
void init() {
}

void checksum() {
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
