#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34079;
long long int var_5 = -4353781371738692199LL;
long long int var_6 = -5548132354810416298LL;
int zero = 0;
short var_11 = (short)-30787;
unsigned int var_12 = 2503303729U;
signed char var_13 = (signed char)4;
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
