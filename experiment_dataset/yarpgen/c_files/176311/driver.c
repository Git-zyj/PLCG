#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4490360769358052986LL;
long long int var_7 = 7271229250117345698LL;
unsigned long long int var_12 = 9799378165987485179ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)76;
int var_15 = -1405918823;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
