#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 176250460;
short var_3 = (short)-560;
unsigned int var_4 = 2540325239U;
unsigned char var_5 = (unsigned char)29;
unsigned char var_6 = (unsigned char)48;
short var_9 = (short)-29979;
unsigned int var_10 = 3582354742U;
unsigned char var_11 = (unsigned char)238;
int zero = 0;
short var_12 = (short)-22565;
short var_13 = (short)8679;
short var_14 = (short)906;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
