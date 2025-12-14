#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5563;
unsigned char var_2 = (unsigned char)38;
short var_4 = (short)6265;
long long int var_11 = 3100801821722620463LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 7841599805803032032ULL;
int zero = 0;
long long int var_14 = -3492755908091800669LL;
int var_15 = -1046232688;
unsigned short var_16 = (unsigned short)53169;
unsigned char var_17 = (unsigned char)96;
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
