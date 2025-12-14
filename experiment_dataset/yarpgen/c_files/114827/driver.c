#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25630;
long long int var_5 = 5077116387287181782LL;
int zero = 0;
signed char var_16 = (signed char)14;
long long int var_17 = 5638918759028576354LL;
signed char var_18 = (signed char)72;
unsigned char var_19 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
