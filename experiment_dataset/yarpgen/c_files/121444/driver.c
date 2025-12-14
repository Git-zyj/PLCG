#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 276336715952059825LL;
unsigned int var_12 = 1050068849U;
unsigned long long int var_14 = 3569055245057815464ULL;
int zero = 0;
short var_16 = (short)-4697;
signed char var_17 = (signed char)21;
void init() {
}

void checksum() {
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
