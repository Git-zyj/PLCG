#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1440332783U;
unsigned int var_4 = 334519039U;
unsigned char var_9 = (unsigned char)38;
long long int var_12 = -5977911294178201927LL;
int zero = 0;
unsigned long long int var_13 = 3829018032425355293ULL;
short var_14 = (short)-6066;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
