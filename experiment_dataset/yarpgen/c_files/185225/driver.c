#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)49769;
signed char var_7 = (signed char)-107;
int var_8 = 765623919;
unsigned int var_10 = 3849886840U;
int zero = 0;
signed char var_11 = (signed char)-16;
int var_12 = 967531962;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
