#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55098;
int var_1 = -58116108;
signed char var_4 = (signed char)-52;
unsigned int var_6 = 71806231U;
unsigned int var_8 = 347142283U;
unsigned short var_9 = (unsigned short)38972;
unsigned long long int var_10 = 10755066867677058782ULL;
int zero = 0;
signed char var_11 = (signed char)24;
short var_12 = (short)-24078;
short var_13 = (short)1058;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
