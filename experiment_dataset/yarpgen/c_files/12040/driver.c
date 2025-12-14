#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18861;
unsigned short var_8 = (unsigned short)32684;
int var_9 = -1488150751;
short var_15 = (short)28203;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)10927;
short var_18 = (short)-4883;
void init() {
}

void checksum() {
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
