#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2130139278;
int var_2 = 1931283612;
unsigned long long int var_9 = 11393030725894085472ULL;
short var_11 = (short)29213;
short var_14 = (short)-9244;
int zero = 0;
unsigned long long int var_16 = 12774615640330398067ULL;
_Bool var_17 = (_Bool)0;
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
