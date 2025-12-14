#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
unsigned char var_4 = (unsigned char)1;
long long int var_11 = -6453920821581544171LL;
int zero = 0;
int var_13 = 284560659;
signed char var_14 = (signed char)73;
long long int var_15 = 3837335753310233261LL;
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
