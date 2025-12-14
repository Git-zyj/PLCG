#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)91;
short var_2 = (short)1014;
short var_4 = (short)21673;
unsigned int var_9 = 1866110903U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 4994990270305667464ULL;
unsigned int var_17 = 3391253097U;
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
