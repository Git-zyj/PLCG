#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
unsigned short var_1 = (unsigned short)22504;
unsigned long long int var_2 = 11942937158069071485ULL;
unsigned short var_4 = (unsigned short)13493;
int var_5 = -1455806645;
unsigned char var_6 = (unsigned char)127;
unsigned short var_7 = (unsigned short)25322;
unsigned int var_10 = 2762027751U;
short var_11 = (short)-2475;
signed char var_12 = (signed char)28;
signed char var_13 = (signed char)-102;
int var_15 = 1732892431;
long long int var_16 = 844984077001990881LL;
short var_17 = (short)22528;
unsigned int var_18 = 2357950896U;
int zero = 0;
short var_19 = (short)30198;
short var_20 = (short)870;
unsigned int var_21 = 238219734U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
