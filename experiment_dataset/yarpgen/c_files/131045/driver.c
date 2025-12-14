#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2094989590U;
long long int var_13 = 4284720788966701554LL;
long long int var_15 = -1030061341339511319LL;
int zero = 0;
long long int var_16 = -4291974646981018936LL;
long long int var_17 = -1732979192859258857LL;
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
