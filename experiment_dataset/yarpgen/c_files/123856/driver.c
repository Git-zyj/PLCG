#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)112;
_Bool var_9 = (_Bool)1;
short var_10 = (short)6148;
long long int var_12 = -2780752878277150753LL;
int zero = 0;
unsigned short var_15 = (unsigned short)52004;
long long int var_16 = 2697881756348163818LL;
signed char var_17 = (signed char)116;
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
