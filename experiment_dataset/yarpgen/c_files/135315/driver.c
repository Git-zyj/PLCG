#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2004071663;
unsigned long long int var_4 = 12336002746401043122ULL;
int var_9 = 135785239;
int zero = 0;
unsigned char var_16 = (unsigned char)125;
signed char var_17 = (signed char)-1;
int var_18 = 496418379;
unsigned short var_19 = (unsigned short)44631;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
