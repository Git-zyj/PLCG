#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 501125123906627950LL;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)0;
short var_10 = (short)23614;
unsigned char var_11 = (unsigned char)160;
int zero = 0;
int var_13 = -1857620528;
unsigned int var_14 = 2296399213U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
