#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-23072;
unsigned long long int var_8 = 5198102856273547165ULL;
unsigned long long int var_10 = 7044036485557852959ULL;
unsigned long long int var_11 = 977821968315601431ULL;
unsigned long long int var_12 = 8367473426593709613ULL;
unsigned int var_13 = 3817776189U;
int zero = 0;
short var_15 = (short)-17109;
unsigned int var_16 = 817477442U;
void init() {
}

void checksum() {
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
