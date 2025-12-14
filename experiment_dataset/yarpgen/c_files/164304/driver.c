#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1517749025;
unsigned long long int var_1 = 4009154829074586192ULL;
unsigned long long int var_2 = 13765297848975777447ULL;
int zero = 0;
long long int var_10 = 3741710062727432741LL;
long long int var_11 = 1225809101691098733LL;
unsigned char var_12 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
