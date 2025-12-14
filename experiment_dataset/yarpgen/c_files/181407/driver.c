#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6618678309909378723LL;
unsigned char var_3 = (unsigned char)154;
unsigned int var_6 = 3084144954U;
unsigned short var_7 = (unsigned short)11878;
short var_10 = (short)-17616;
unsigned int var_12 = 1295318438U;
int zero = 0;
unsigned int var_16 = 2019224583U;
short var_17 = (short)-30027;
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
