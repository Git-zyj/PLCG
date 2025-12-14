#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11794577680095279755ULL;
int var_3 = 820360125;
unsigned long long int var_4 = 16535425835154707103ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)82;
short var_12 = (short)12940;
unsigned int var_13 = 1896321451U;
_Bool var_14 = (_Bool)0;
long long int var_15 = 8572714500488263165LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)34975;
void init() {
}

void checksum() {
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
