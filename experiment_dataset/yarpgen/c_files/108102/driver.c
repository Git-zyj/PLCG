#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2921205945U;
unsigned long long int var_5 = 16763545597026023575ULL;
short var_7 = (short)66;
unsigned short var_8 = (unsigned short)60741;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 16246978868202305688ULL;
short var_15 = (short)-11605;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
