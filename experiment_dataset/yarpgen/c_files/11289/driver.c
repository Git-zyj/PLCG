#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13581;
unsigned long long int var_3 = 11091995361091426573ULL;
unsigned short var_7 = (unsigned short)24564;
unsigned int var_8 = 2221246283U;
int zero = 0;
int var_14 = 1339025118;
short var_15 = (short)-24480;
int var_16 = -1351147777;
unsigned long long int var_17 = 15506575711844298136ULL;
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
