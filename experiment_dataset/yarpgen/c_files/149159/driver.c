#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 8429047854985566822ULL;
unsigned short var_8 = (unsigned short)39235;
int zero = 0;
long long int var_13 = -7672042972482278734LL;
int var_14 = -601525914;
unsigned short var_15 = (unsigned short)25571;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
