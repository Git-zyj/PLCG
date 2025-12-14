#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
long long int var_3 = -7583087227663174832LL;
unsigned long long int var_9 = 3411286968223399595ULL;
long long int var_14 = 1646892846339380286LL;
int zero = 0;
unsigned short var_17 = (unsigned short)48148;
unsigned long long int var_18 = 9153812801073144ULL;
void init() {
}

void checksum() {
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
