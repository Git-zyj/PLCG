#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -990725851;
unsigned int var_4 = 3714173867U;
unsigned long long int var_8 = 4167604640545000781ULL;
int var_13 = 768490030;
int zero = 0;
unsigned long long int var_14 = 5259679559164482729ULL;
int var_15 = 68640434;
short var_16 = (short)-4876;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
