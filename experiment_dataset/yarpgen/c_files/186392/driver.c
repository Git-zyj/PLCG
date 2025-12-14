#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1330758869;
long long int var_5 = 4546677327766889864LL;
unsigned int var_7 = 3986389572U;
int zero = 0;
unsigned long long int var_13 = 2071395700930015099ULL;
int var_14 = -295942346;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
