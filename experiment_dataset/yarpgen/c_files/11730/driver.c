#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1556018868943251231ULL;
unsigned int var_10 = 1539351693U;
unsigned long long int var_11 = 10070475389168076325ULL;
short var_16 = (short)13919;
int zero = 0;
unsigned long long int var_20 = 17281119473618767566ULL;
int var_21 = 1113209651;
short var_22 = (short)-27818;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
