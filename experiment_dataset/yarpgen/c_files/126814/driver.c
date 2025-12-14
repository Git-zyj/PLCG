#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-119;
unsigned short var_4 = (unsigned short)26907;
signed char var_11 = (signed char)9;
int zero = 0;
signed char var_12 = (signed char)-117;
signed char var_13 = (signed char)-53;
unsigned int var_14 = 1559775479U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
