#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -6662335846369738883LL;
long long int var_11 = 6640266649113409409LL;
int zero = 0;
unsigned char var_15 = (unsigned char)169;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 286813853U;
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
