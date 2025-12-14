#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -477135683713255551LL;
signed char var_7 = (signed char)-76;
long long int var_12 = -8250593766567615864LL;
signed char var_15 = (signed char)9;
int zero = 0;
long long int var_16 = 4501178466502839304LL;
signed char var_17 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
