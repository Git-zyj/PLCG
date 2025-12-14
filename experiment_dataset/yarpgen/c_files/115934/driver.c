#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8261078314786966869LL;
unsigned long long int var_6 = 1256783320050685790ULL;
signed char var_11 = (signed char)-88;
int zero = 0;
long long int var_13 = -215578689083808668LL;
long long int var_14 = 7676269937203834451LL;
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
