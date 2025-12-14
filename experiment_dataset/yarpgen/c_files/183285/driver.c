#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24598;
short var_11 = (short)-244;
signed char var_12 = (signed char)-67;
long long int var_13 = -4353164262755176450LL;
unsigned long long int var_14 = 12746242699597364345ULL;
int zero = 0;
short var_16 = (short)-29628;
unsigned char var_17 = (unsigned char)170;
unsigned short var_18 = (unsigned short)51377;
unsigned int var_19 = 2209731087U;
long long int var_20 = -8682449211261972421LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
