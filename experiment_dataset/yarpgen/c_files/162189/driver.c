#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17175460719349602344ULL;
short var_9 = (short)-31668;
int zero = 0;
unsigned char var_15 = (unsigned char)16;
long long int var_16 = 9218579602881863165LL;
unsigned int var_17 = 3801976004U;
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
