#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14128471290374389765ULL;
short var_6 = (short)1067;
long long int var_9 = 3226382093216277778LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2797302333U;
int zero = 0;
unsigned int var_15 = 2693693773U;
int var_16 = -307789417;
unsigned short var_17 = (unsigned short)18493;
void init() {
}

void checksum() {
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
