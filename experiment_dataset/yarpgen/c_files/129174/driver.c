#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)19074;
unsigned short var_12 = (unsigned short)61207;
unsigned short var_13 = (unsigned short)45717;
int zero = 0;
unsigned short var_18 = (unsigned short)52728;
unsigned int var_19 = 2852892668U;
unsigned long long int var_20 = 2365034147272859676ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
