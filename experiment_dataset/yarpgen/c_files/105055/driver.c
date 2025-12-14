#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11318;
long long int var_2 = 5587967381226562LL;
long long int var_3 = -5960860223750243853LL;
unsigned char var_9 = (unsigned char)205;
int var_11 = 1987262128;
unsigned short var_13 = (unsigned short)5256;
unsigned short var_14 = (unsigned short)47964;
unsigned char var_15 = (unsigned char)108;
int zero = 0;
int var_16 = 874199351;
long long int var_17 = -8694185428442815797LL;
short var_18 = (short)-29039;
signed char var_19 = (signed char)81;
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
