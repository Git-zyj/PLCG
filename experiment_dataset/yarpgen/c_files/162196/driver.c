#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1761734036U;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)243;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -246012086477463832LL;
unsigned short var_21 = (unsigned short)10325;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
