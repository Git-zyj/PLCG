#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31954;
short var_5 = (short)3232;
unsigned char var_9 = (unsigned char)251;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)4519;
_Bool var_16 = (_Bool)0;
long long int var_17 = 1365188420912302091LL;
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
