#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
signed char var_1 = (signed char)55;
signed char var_2 = (signed char)113;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1744975002U;
short var_13 = (short)-30701;
signed char var_16 = (signed char)-60;
int zero = 0;
unsigned int var_17 = 3038952414U;
unsigned char var_18 = (unsigned char)182;
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
