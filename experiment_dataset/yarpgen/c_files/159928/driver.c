#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
unsigned long long int var_2 = 12348606812401178799ULL;
long long int var_9 = -542410889826542579LL;
short var_10 = (short)16220;
unsigned short var_13 = (unsigned short)28789;
unsigned char var_15 = (unsigned char)220;
int zero = 0;
unsigned char var_20 = (unsigned char)190;
unsigned char var_21 = (unsigned char)70;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 14390548767779641031ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
