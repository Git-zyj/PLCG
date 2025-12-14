#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 665354368;
int var_13 = -55039156;
int zero = 0;
unsigned long long int var_15 = 5465208760662570272ULL;
unsigned int var_16 = 3239537015U;
unsigned long long int var_17 = 12865923112374270964ULL;
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
