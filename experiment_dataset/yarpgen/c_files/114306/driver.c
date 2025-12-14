#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 10585041899022167360ULL;
unsigned short var_11 = (unsigned short)37263;
int zero = 0;
long long int var_14 = 3309611159218889523LL;
unsigned char var_15 = (unsigned char)35;
_Bool var_16 = (_Bool)1;
long long int var_17 = -7727322697123818176LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
