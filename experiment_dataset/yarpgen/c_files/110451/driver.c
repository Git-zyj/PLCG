#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 867246541;
signed char var_6 = (signed char)121;
signed char var_9 = (signed char)-52;
unsigned long long int var_12 = 14338488430376708645ULL;
short var_14 = (short)-13939;
int zero = 0;
unsigned short var_16 = (unsigned short)61927;
unsigned char var_17 = (unsigned char)67;
unsigned short var_18 = (unsigned short)1314;
void init() {
}

void checksum() {
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
