#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1410653514;
_Bool var_4 = (_Bool)0;
long long int var_5 = -1512839569686478736LL;
unsigned char var_6 = (unsigned char)142;
long long int var_8 = -8945156868118861983LL;
unsigned char var_9 = (unsigned char)20;
int var_11 = -910832542;
unsigned char var_14 = (unsigned char)34;
int zero = 0;
unsigned int var_15 = 4423866U;
unsigned int var_16 = 246321050U;
void init() {
}

void checksum() {
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
