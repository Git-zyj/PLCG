#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -528666842;
long long int var_5 = -8799106908936814151LL;
long long int var_6 = -1748315386851188306LL;
unsigned char var_8 = (unsigned char)186;
int zero = 0;
signed char var_11 = (signed char)56;
long long int var_12 = 7511065296548454457LL;
signed char var_13 = (signed char)-78;
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
