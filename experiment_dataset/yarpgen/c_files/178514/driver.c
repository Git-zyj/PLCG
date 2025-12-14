#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3712776494U;
int var_4 = -619179247;
short var_6 = (short)-16777;
int zero = 0;
unsigned char var_10 = (unsigned char)59;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2722809686U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
