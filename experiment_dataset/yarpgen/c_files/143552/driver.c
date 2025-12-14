#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6903125135493601359LL;
int var_6 = 1106389783;
signed char var_13 = (signed char)-4;
int zero = 0;
unsigned long long int var_15 = 7238555995212512648ULL;
unsigned short var_16 = (unsigned short)22916;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
