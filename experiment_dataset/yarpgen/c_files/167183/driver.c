#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2867267432U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 10579885539253385361ULL;
unsigned int var_6 = 1364297625U;
long long int var_8 = 6341193218659032114LL;
unsigned long long int var_9 = 15300268392754069260ULL;
unsigned char var_10 = (unsigned char)24;
unsigned long long int var_13 = 15840071390248856603ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)657;
short var_15 = (short)15104;
long long int var_16 = -3130243561546002178LL;
unsigned int var_17 = 3616418478U;
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
