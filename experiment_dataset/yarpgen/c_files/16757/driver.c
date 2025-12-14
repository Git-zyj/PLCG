#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11109207661178566593ULL;
unsigned long long int var_2 = 9362859615874422525ULL;
unsigned long long int var_4 = 10518946271171939531ULL;
long long int var_8 = -1928349617906063261LL;
long long int var_9 = -4053780710781261583LL;
int zero = 0;
long long int var_12 = 7369170583747180950LL;
unsigned long long int var_13 = 7906123974948322280ULL;
void init() {
}

void checksum() {
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
