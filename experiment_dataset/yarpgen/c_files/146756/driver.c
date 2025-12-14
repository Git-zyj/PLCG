#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 323339130;
unsigned long long int var_1 = 8191417571504996561ULL;
unsigned long long int var_3 = 14565353891146338647ULL;
signed char var_8 = (signed char)67;
int var_9 = -333066756;
unsigned int var_10 = 3155758944U;
short var_11 = (short)-21432;
int zero = 0;
short var_12 = (short)7232;
unsigned int var_13 = 1114038415U;
unsigned long long int var_14 = 16396568256304844660ULL;
unsigned int var_15 = 1519862474U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
