#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-46;
int var_4 = 834517549;
signed char var_15 = (signed char)-113;
short var_16 = (short)-28246;
int var_17 = -31765474;
int zero = 0;
signed char var_18 = (signed char)127;
signed char var_19 = (signed char)79;
unsigned long long int var_20 = 8613975843843647893ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
