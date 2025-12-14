#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)109;
short var_14 = (short)27899;
int zero = 0;
long long int var_20 = -6032807473643225721LL;
unsigned char var_21 = (unsigned char)126;
unsigned long long int var_22 = 12467825462212844533ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
