#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 68365438U;
unsigned short var_3 = (unsigned short)12687;
unsigned long long int var_5 = 12587806392115662422ULL;
signed char var_6 = (signed char)89;
long long int var_8 = -960418951820712390LL;
unsigned char var_12 = (unsigned char)238;
unsigned short var_13 = (unsigned short)57605;
int zero = 0;
long long int var_14 = -7018688415254347477LL;
signed char var_15 = (signed char)-93;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)34999;
unsigned short var_18 = (unsigned short)24624;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
