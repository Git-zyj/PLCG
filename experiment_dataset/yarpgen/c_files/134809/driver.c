#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-21958;
short var_15 = (short)-2335;
int zero = 0;
short var_20 = (short)11723;
unsigned long long int var_21 = 12175509998205601686ULL;
unsigned long long int var_22 = 7803459565207188182ULL;
unsigned long long int var_23 = 1009500721920979958ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
