#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17275518689795982345ULL;
signed char var_5 = (signed char)116;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 18436113540996604582ULL;
unsigned int var_8 = 4033278412U;
unsigned short var_9 = (unsigned short)20608;
int var_10 = 1872008847;
short var_11 = (short)-12464;
unsigned int var_12 = 3469405536U;
int var_13 = -998113288;
int zero = 0;
short var_14 = (short)8600;
short var_15 = (short)-25007;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
