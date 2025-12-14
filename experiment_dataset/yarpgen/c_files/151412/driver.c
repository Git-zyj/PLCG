#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4690255941659057195ULL;
unsigned short var_2 = (unsigned short)16105;
int zero = 0;
long long int var_14 = 4768405190476099500LL;
signed char var_15 = (signed char)99;
signed char var_16 = (signed char)45;
unsigned long long int var_17 = 3778197693105364804ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
