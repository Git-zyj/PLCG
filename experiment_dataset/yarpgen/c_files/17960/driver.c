#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)19;
int var_14 = 20232891;
int var_15 = -780051861;
int zero = 0;
long long int var_16 = 4360021281588263499LL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
