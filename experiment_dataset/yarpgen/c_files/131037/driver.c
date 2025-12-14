#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2418923772539097568ULL;
unsigned short var_3 = (unsigned short)15887;
unsigned int var_4 = 1576786560U;
unsigned short var_15 = (unsigned short)59873;
unsigned int var_16 = 3744208968U;
int zero = 0;
unsigned short var_17 = (unsigned short)3857;
long long int var_18 = -3126759144039729286LL;
unsigned long long int var_19 = 1298458106025422498ULL;
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
