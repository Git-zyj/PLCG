#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)70;
signed char var_3 = (signed char)112;
short var_6 = (short)-20774;
unsigned long long int var_7 = 8502947899436257358ULL;
int zero = 0;
long long int var_10 = -296795159019117904LL;
signed char var_11 = (signed char)-30;
short var_12 = (short)-15574;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
