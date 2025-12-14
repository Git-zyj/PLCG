#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-80;
int var_7 = -1313810247;
unsigned long long int var_8 = 4644277711105870180ULL;
short var_10 = (short)29836;
int zero = 0;
int var_17 = 1828727142;
signed char var_18 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
