#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 1751338818;
int var_11 = 351043132;
int zero = 0;
unsigned int var_13 = 3375293673U;
long long int var_14 = 1369919286024702349LL;
unsigned char var_15 = (unsigned char)204;
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
