#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 510166954;
int var_1 = -1573389498;
signed char var_2 = (signed char)-101;
unsigned char var_3 = (unsigned char)7;
signed char var_4 = (signed char)-57;
unsigned int var_7 = 2941993536U;
int var_8 = 757287846;
short var_11 = (short)-29299;
unsigned int var_13 = 2831047732U;
int zero = 0;
unsigned int var_14 = 3696304138U;
short var_15 = (short)-26316;
unsigned long long int var_16 = 3730489235006378061ULL;
unsigned int var_17 = 3976153178U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
