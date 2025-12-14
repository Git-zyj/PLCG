#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3050709010U;
short var_3 = (short)-11632;
long long int var_5 = 4643977224079044301LL;
signed char var_7 = (signed char)(-127 - 1);
int var_11 = 2086816424;
unsigned long long int var_12 = 5064117394067559568ULL;
short var_13 = (short)944;
long long int var_14 = 7279551781210436255LL;
int zero = 0;
short var_17 = (short)-26235;
long long int var_18 = -7067507769299370897LL;
unsigned int var_19 = 1327504003U;
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
