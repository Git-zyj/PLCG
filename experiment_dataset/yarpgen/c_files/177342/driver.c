#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2360980161U;
unsigned short var_11 = (unsigned short)8524;
unsigned long long int var_12 = 5733117874081215456ULL;
signed char var_13 = (signed char)11;
unsigned short var_15 = (unsigned short)38079;
int zero = 0;
short var_18 = (short)3290;
unsigned int var_19 = 1629897536U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
