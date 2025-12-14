#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21571;
signed char var_7 = (signed char)-82;
unsigned int var_11 = 949533183U;
int zero = 0;
long long int var_12 = 3305549546103239573LL;
unsigned int var_13 = 4111636831U;
long long int var_14 = -1223418791509800869LL;
long long int var_15 = 5667261152445539178LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
