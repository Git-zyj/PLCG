#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned char var_1 = (unsigned char)255;
unsigned long long int var_4 = 1393251273330012660ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)42;
unsigned short var_11 = (unsigned short)4631;
unsigned long long int var_12 = 906830611246111068ULL;
unsigned int var_13 = 2016880179U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
