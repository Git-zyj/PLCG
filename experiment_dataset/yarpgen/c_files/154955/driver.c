#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16508746085458477306ULL;
long long int var_4 = 1557486766443875729LL;
unsigned short var_5 = (unsigned short)47130;
unsigned long long int var_8 = 1497835773925999379ULL;
int var_9 = 95247390;
int zero = 0;
unsigned int var_11 = 3249063415U;
short var_12 = (short)4190;
void init() {
}

void checksum() {
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
