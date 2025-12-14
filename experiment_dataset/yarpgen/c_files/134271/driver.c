#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1872251797061542664LL;
long long int var_5 = 5531678287646044211LL;
int zero = 0;
unsigned int var_17 = 69401839U;
unsigned int var_18 = 1453814700U;
unsigned int var_19 = 3506371887U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
