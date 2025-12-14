#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16493584173237619790ULL;
unsigned int var_8 = 2573391350U;
unsigned long long int var_14 = 3697869533707364625ULL;
int zero = 0;
long long int var_15 = -3600105622365066308LL;
long long int var_16 = 2563147825911544887LL;
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
