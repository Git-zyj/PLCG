#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4583733602369392749LL;
unsigned char var_7 = (unsigned char)49;
unsigned short var_9 = (unsigned short)23261;
unsigned int var_14 = 2008822564U;
int zero = 0;
int var_19 = -659693176;
long long int var_20 = 8678053234664939924LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
