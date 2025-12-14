#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2140246650739867162ULL;
signed char var_9 = (signed char)98;
int zero = 0;
unsigned short var_11 = (unsigned short)29132;
long long int var_12 = -3959129475973120546LL;
unsigned long long int var_13 = 3118422995726533856ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
