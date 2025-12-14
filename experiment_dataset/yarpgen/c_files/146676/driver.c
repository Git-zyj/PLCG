#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2126115636761934584LL;
unsigned long long int var_3 = 3137112712819934903ULL;
long long int var_4 = -1165120601990426266LL;
int var_5 = -58685828;
unsigned int var_6 = 1726773756U;
unsigned long long int var_13 = 14521894467746123072ULL;
int zero = 0;
unsigned long long int var_16 = 9926736773453340653ULL;
unsigned int var_17 = 626689158U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
