#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3845286681U;
int var_10 = -1116866080;
unsigned char var_12 = (unsigned char)244;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)162;
int zero = 0;
long long int var_16 = 8972444005008312286LL;
unsigned short var_17 = (unsigned short)64866;
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
