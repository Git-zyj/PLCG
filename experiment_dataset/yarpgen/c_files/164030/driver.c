#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 68909160;
unsigned short var_3 = (unsigned short)14438;
int var_4 = 353474187;
unsigned short var_5 = (unsigned short)1948;
short var_9 = (short)31354;
unsigned short var_14 = (unsigned short)3258;
int zero = 0;
signed char var_15 = (signed char)125;
unsigned short var_16 = (unsigned short)7682;
unsigned short var_17 = (unsigned short)4720;
unsigned short var_18 = (unsigned short)3671;
void init() {
}

void checksum() {
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
