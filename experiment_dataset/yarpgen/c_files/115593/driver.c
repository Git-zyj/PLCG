#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5007991823832849215ULL;
unsigned int var_4 = 85982977U;
short var_6 = (short)16806;
int zero = 0;
unsigned long long int var_11 = 4409500047380645582ULL;
unsigned long long int var_12 = 14497208202759340801ULL;
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
