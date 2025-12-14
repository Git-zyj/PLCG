#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
signed char var_1 = (signed char)-93;
int var_2 = -1504491180;
signed char var_5 = (signed char)25;
unsigned short var_9 = (unsigned short)24664;
unsigned short var_10 = (unsigned short)11840;
short var_12 = (short)-29213;
int zero = 0;
unsigned long long int var_13 = 10910404815398020271ULL;
int var_14 = -257861999;
int var_15 = -377912260;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
