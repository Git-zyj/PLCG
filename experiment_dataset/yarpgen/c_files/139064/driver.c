#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 961785139U;
unsigned int var_5 = 662001775U;
short var_8 = (short)-10545;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -7069744477728787240LL;
unsigned char var_17 = (unsigned char)224;
void init() {
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
