#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -802088901;
unsigned int var_10 = 2024950342U;
int var_14 = 1266775254;
short var_16 = (short)-12935;
unsigned long long int var_19 = 15506132205821421068ULL;
int zero = 0;
signed char var_20 = (signed char)-85;
long long int var_21 = -4327090436896952594LL;
signed char var_22 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
