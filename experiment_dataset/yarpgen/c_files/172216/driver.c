#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6227099647385643720LL;
signed char var_4 = (signed char)114;
signed char var_5 = (signed char)-111;
unsigned short var_17 = (unsigned short)50098;
int zero = 0;
signed char var_18 = (signed char)111;
long long int var_19 = -5584641291450765462LL;
void init() {
}

void checksum() {
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
