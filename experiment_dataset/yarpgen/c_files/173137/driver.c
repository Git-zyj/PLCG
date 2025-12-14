#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2184373003U;
short var_1 = (short)5175;
short var_3 = (short)-6157;
unsigned long long int var_4 = 6329895381164564912ULL;
unsigned long long int var_8 = 6024457291305612296ULL;
int var_10 = 120064188;
int var_13 = 1732049582;
unsigned char var_14 = (unsigned char)147;
unsigned short var_16 = (unsigned short)61736;
int zero = 0;
long long int var_17 = -6302782973127832918LL;
unsigned int var_18 = 4289753632U;
short var_19 = (short)22991;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
