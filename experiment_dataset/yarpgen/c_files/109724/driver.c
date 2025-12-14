#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3513585925U;
long long int var_7 = 2334620138026402608LL;
short var_11 = (short)18854;
int zero = 0;
unsigned int var_20 = 2243741362U;
short var_21 = (short)-21404;
long long int var_22 = 7908328848353174806LL;
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
