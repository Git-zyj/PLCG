#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
long long int var_3 = -217700594738369979LL;
unsigned long long int var_4 = 969308225534926867ULL;
unsigned int var_5 = 1802498820U;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)10388;
int zero = 0;
unsigned long long int var_10 = 11142070179829845255ULL;
short var_11 = (short)-2308;
unsigned short var_12 = (unsigned short)12641;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
