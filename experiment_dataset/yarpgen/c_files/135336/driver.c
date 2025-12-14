#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 438460053U;
unsigned long long int var_6 = 11516337487163954150ULL;
unsigned int var_9 = 2764042641U;
int zero = 0;
unsigned int var_13 = 1101993014U;
long long int var_14 = 393938299235836501LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
