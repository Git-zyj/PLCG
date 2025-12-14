#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
long long int var_2 = -1341942647188658390LL;
unsigned long long int var_4 = 8024069487859556448ULL;
unsigned short var_5 = (unsigned short)45185;
unsigned long long int var_7 = 1934360786430293726ULL;
unsigned int var_8 = 4183995465U;
unsigned long long int var_9 = 17249690953652701534ULL;
unsigned long long int var_12 = 2500696506288523284ULL;
short var_14 = (short)-7647;
signed char var_16 = (signed char)33;
int zero = 0;
long long int var_17 = -8356310879758181762LL;
unsigned long long int var_18 = 5263317207987693597ULL;
unsigned int var_19 = 4095896459U;
int var_20 = 1944140119;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
