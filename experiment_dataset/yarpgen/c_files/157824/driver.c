#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27042;
unsigned char var_5 = (unsigned char)202;
unsigned short var_6 = (unsigned short)40596;
short var_11 = (short)1598;
int zero = 0;
int var_17 = 1533867760;
unsigned int var_18 = 2373718065U;
unsigned int var_19 = 2944737715U;
unsigned int var_20 = 39849677U;
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
