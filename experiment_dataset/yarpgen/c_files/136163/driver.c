#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5329099687679666337LL;
signed char var_7 = (signed char)12;
signed char var_13 = (signed char)108;
int zero = 0;
long long int var_15 = -2813278970872780366LL;
short var_16 = (short)14328;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
