#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)9;
long long int var_9 = -1348155378523118496LL;
int var_10 = 389121119;
int var_12 = -318067743;
unsigned int var_14 = 2293004175U;
int zero = 0;
unsigned int var_16 = 1724081897U;
unsigned short var_17 = (unsigned short)38865;
void init() {
}

void checksum() {
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
