#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7256452711092289472LL;
unsigned short var_7 = (unsigned short)49802;
unsigned int var_9 = 197406740U;
int zero = 0;
unsigned short var_19 = (unsigned short)55975;
unsigned short var_20 = (unsigned short)14774;
unsigned long long int var_21 = 1542700090855063149ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
