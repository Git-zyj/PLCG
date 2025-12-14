#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5705;
short var_1 = (short)-30360;
unsigned short var_2 = (unsigned short)16983;
long long int var_3 = -8960839234662960026LL;
unsigned char var_6 = (unsigned char)77;
int var_7 = -1969728538;
unsigned short var_11 = (unsigned short)37826;
int zero = 0;
unsigned int var_13 = 3548942433U;
long long int var_14 = -6394855643437515860LL;
long long int var_15 = 7557224628129351214LL;
int var_16 = 1747977567;
signed char var_17 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
