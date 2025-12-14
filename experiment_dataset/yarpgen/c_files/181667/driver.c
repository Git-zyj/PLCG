#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 1444209682862650674ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_15 = -179534339827965597LL;
unsigned char var_16 = (unsigned char)18;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)15;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
