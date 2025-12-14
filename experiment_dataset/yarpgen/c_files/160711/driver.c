#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-57;
signed char var_2 = (signed char)110;
signed char var_4 = (signed char)-61;
short var_5 = (short)-6219;
short var_7 = (short)1501;
long long int var_9 = 676850436855321461LL;
signed char var_10 = (signed char)-13;
int var_15 = -2556739;
unsigned char var_16 = (unsigned char)38;
int zero = 0;
unsigned int var_17 = 2273313527U;
unsigned short var_18 = (unsigned short)37431;
void init() {
}

void checksum() {
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
