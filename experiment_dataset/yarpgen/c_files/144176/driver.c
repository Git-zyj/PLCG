#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)56;
signed char var_9 = (signed char)119;
int var_12 = 872915151;
long long int var_13 = 8893207869355414492LL;
int zero = 0;
signed char var_14 = (signed char)-94;
long long int var_15 = -2581924041683544758LL;
void init() {
}

void checksum() {
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
