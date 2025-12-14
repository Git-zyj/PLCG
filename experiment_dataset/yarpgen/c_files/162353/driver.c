#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)67;
unsigned char var_4 = (unsigned char)91;
short var_6 = (short)-5336;
unsigned long long int var_12 = 7932724804506591723ULL;
int zero = 0;
unsigned long long int var_15 = 5200304861373558471ULL;
unsigned long long int var_16 = 836770129971311237ULL;
signed char var_17 = (signed char)115;
signed char var_18 = (signed char)-15;
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
