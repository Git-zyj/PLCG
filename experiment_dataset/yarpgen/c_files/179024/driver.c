#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2709076352U;
unsigned short var_3 = (unsigned short)23052;
unsigned short var_4 = (unsigned short)34691;
unsigned short var_6 = (unsigned short)54571;
unsigned short var_8 = (unsigned short)15265;
signed char var_12 = (signed char)-39;
signed char var_15 = (signed char)-46;
signed char var_16 = (signed char)-76;
unsigned int var_19 = 2606582920U;
int zero = 0;
unsigned long long int var_20 = 9659728671083968369ULL;
signed char var_21 = (signed char)100;
unsigned short var_22 = (unsigned short)13084;
void init() {
}

void checksum() {
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
