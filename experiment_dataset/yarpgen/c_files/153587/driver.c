#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3834361220U;
unsigned int var_6 = 2387089837U;
unsigned long long int var_9 = 7861996918613670074ULL;
unsigned short var_12 = (unsigned short)30023;
signed char var_13 = (signed char)-121;
signed char var_14 = (signed char)-78;
unsigned int var_16 = 483585417U;
int zero = 0;
short var_17 = (short)13061;
signed char var_18 = (signed char)108;
unsigned short var_19 = (unsigned short)48313;
int var_20 = 1995376235;
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
