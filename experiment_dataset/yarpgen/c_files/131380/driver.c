#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
int var_1 = -1280451996;
int var_3 = 1159121178;
int var_6 = -1059206924;
unsigned char var_7 = (unsigned char)234;
unsigned int var_12 = 1378361232U;
int var_15 = -1212368755;
signed char var_16 = (signed char)-46;
signed char var_17 = (signed char)109;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)188;
unsigned short var_20 = (unsigned short)9073;
signed char var_21 = (signed char)18;
signed char var_22 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
