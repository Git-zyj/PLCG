#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34686;
long long int var_4 = -5671361026616069045LL;
int var_5 = 804230783;
signed char var_7 = (signed char)49;
unsigned short var_8 = (unsigned short)61039;
unsigned long long int var_14 = 14904861214219925793ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)232;
unsigned int var_17 = 3425930493U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
