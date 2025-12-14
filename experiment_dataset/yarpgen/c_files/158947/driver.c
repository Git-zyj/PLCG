#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61376;
unsigned long long int var_6 = 17805411775399178977ULL;
unsigned short var_12 = (unsigned short)7661;
int zero = 0;
unsigned short var_15 = (unsigned short)6673;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 12974334381524520896ULL;
void init() {
}

void checksum() {
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
