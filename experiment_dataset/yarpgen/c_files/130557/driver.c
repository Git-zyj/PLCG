#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -334778785;
signed char var_3 = (signed char)-87;
unsigned char var_6 = (unsigned char)66;
signed char var_7 = (signed char)4;
long long int var_8 = 7381510045096021401LL;
unsigned short var_9 = (unsigned short)6582;
unsigned short var_11 = (unsigned short)42561;
int zero = 0;
unsigned int var_12 = 987743032U;
signed char var_13 = (signed char)27;
unsigned char var_14 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
