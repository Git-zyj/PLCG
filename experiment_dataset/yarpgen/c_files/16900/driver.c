#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)164;
unsigned long long int var_2 = 12949743827089709433ULL;
unsigned short var_3 = (unsigned short)6553;
signed char var_9 = (signed char)34;
int var_10 = -2126312789;
unsigned char var_12 = (unsigned char)91;
int zero = 0;
short var_14 = (short)20525;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)225;
unsigned short var_17 = (unsigned short)53879;
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
