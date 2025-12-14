#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)6459;
unsigned int var_8 = 2704188943U;
short var_10 = (short)27799;
unsigned char var_11 = (unsigned char)150;
unsigned int var_12 = 2727178878U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 6215158055751789454ULL;
unsigned short var_15 = (unsigned short)23341;
short var_16 = (short)30511;
_Bool var_17 = (_Bool)0;
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
