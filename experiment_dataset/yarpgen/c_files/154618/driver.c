#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)216;
unsigned char var_3 = (unsigned char)244;
int zero = 0;
unsigned int var_16 = 1322873338U;
unsigned int var_17 = 835635740U;
short var_18 = (short)5841;
long long int var_19 = 9019212538488313721LL;
short var_20 = (short)24486;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
