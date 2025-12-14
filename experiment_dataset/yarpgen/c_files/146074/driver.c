#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 15913847437098854318ULL;
signed char var_3 = (signed char)82;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 3018403588U;
int zero = 0;
unsigned char var_14 = (unsigned char)103;
int var_15 = 1702962422;
int var_16 = -1317925812;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
