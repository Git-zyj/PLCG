#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -805981149;
long long int var_6 = 3343217259037855931LL;
int zero = 0;
unsigned long long int var_10 = 7186015393215178022ULL;
signed char var_11 = (signed char)68;
unsigned short var_12 = (unsigned short)22570;
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
