#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 731522872U;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1231616804U;
unsigned long long int var_6 = 7433563731109465728ULL;
signed char var_7 = (signed char)72;
int var_8 = -613582496;
unsigned short var_9 = (unsigned short)6580;
int var_10 = -253074106;
signed char var_11 = (signed char)99;
unsigned char var_14 = (unsigned char)171;
int zero = 0;
unsigned char var_18 = (unsigned char)188;
signed char var_19 = (signed char)-36;
void init() {
}

void checksum() {
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
