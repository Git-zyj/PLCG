#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-34;
short var_7 = (short)-9567;
unsigned char var_10 = (unsigned char)94;
unsigned short var_14 = (unsigned short)57454;
int zero = 0;
unsigned long long int var_16 = 8883823301325567983ULL;
unsigned short var_17 = (unsigned short)61532;
unsigned int var_18 = 2589690181U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
