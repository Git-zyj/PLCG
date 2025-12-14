#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
short var_2 = (short)15299;
unsigned short var_3 = (unsigned short)56024;
short var_4 = (short)16395;
unsigned int var_7 = 1835379843U;
unsigned char var_9 = (unsigned char)52;
unsigned int var_15 = 4062488731U;
int zero = 0;
unsigned int var_16 = 501279089U;
long long int var_17 = 2131935109311902546LL;
short var_18 = (short)-2206;
unsigned short var_19 = (unsigned short)37898;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
