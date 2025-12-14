#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30829;
unsigned short var_2 = (unsigned short)20692;
unsigned char var_3 = (unsigned char)230;
unsigned char var_4 = (unsigned char)11;
unsigned int var_7 = 1257776812U;
int zero = 0;
unsigned char var_18 = (unsigned char)103;
unsigned short var_19 = (unsigned short)31502;
int var_20 = -842643231;
unsigned char var_21 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
