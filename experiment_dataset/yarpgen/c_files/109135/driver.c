#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
unsigned int var_1 = 860051269U;
unsigned short var_4 = (unsigned short)15421;
short var_5 = (short)-13369;
short var_7 = (short)25268;
short var_8 = (short)22883;
short var_10 = (short)4438;
signed char var_11 = (signed char)-124;
unsigned long long int var_12 = 14680958948486796087ULL;
unsigned long long int var_14 = 1218318996684759165ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)8;
unsigned int var_18 = 3139739894U;
unsigned short var_19 = (unsigned short)3268;
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
