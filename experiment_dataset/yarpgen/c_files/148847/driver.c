#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6581503951189188058LL;
int var_2 = -1365837789;
unsigned int var_3 = 3354927798U;
unsigned int var_5 = 4269527227U;
long long int var_8 = 6752985246694305844LL;
int zero = 0;
int var_14 = -1546959282;
unsigned long long int var_15 = 1253711787970546098ULL;
signed char var_16 = (signed char)92;
unsigned long long int var_17 = 9097762736967556598ULL;
unsigned short var_18 = (unsigned short)17168;
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
