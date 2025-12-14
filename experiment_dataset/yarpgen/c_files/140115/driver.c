#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6983675927567681401LL;
unsigned char var_3 = (unsigned char)195;
short var_4 = (short)-25360;
unsigned long long int var_7 = 11062851546486435265ULL;
unsigned int var_12 = 245137574U;
short var_13 = (short)-28902;
signed char var_14 = (signed char)99;
int zero = 0;
unsigned char var_15 = (unsigned char)246;
unsigned int var_16 = 3666321146U;
unsigned short var_17 = (unsigned short)8072;
void init() {
}

void checksum() {
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
