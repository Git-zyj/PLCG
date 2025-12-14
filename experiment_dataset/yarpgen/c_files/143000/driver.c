#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2098181594560150850LL;
long long int var_10 = 315333321768842090LL;
signed char var_13 = (signed char)(-127 - 1);
signed char var_14 = (signed char)61;
int zero = 0;
unsigned short var_19 = (unsigned short)55051;
unsigned short var_20 = (unsigned short)19751;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
