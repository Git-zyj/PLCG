#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1892909315;
unsigned long long int var_3 = 18083527481538017209ULL;
signed char var_8 = (signed char)40;
long long int var_9 = -810160150997626041LL;
short var_11 = (short)25343;
int zero = 0;
short var_12 = (short)571;
unsigned int var_13 = 1956208279U;
void init() {
}

void checksum() {
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
