#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 1577340611U;
unsigned int var_12 = 2072469962U;
unsigned short var_14 = (unsigned short)45816;
int zero = 0;
unsigned long long int var_15 = 13468415370331655721ULL;
long long int var_16 = -7516844941838405834LL;
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
