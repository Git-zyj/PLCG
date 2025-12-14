#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
unsigned long long int var_1 = 11517564574310508295ULL;
int var_3 = 1480571922;
unsigned long long int var_6 = 7239363297587209619ULL;
int zero = 0;
unsigned long long int var_12 = 1397911581235285012ULL;
int var_13 = -1609673291;
signed char var_14 = (signed char)-104;
signed char var_15 = (signed char)-28;
int var_16 = -367231352;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
