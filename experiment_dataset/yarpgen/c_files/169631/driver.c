#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)82;
short var_2 = (short)-31160;
unsigned short var_4 = (unsigned short)20717;
short var_9 = (short)22185;
unsigned long long int var_10 = 2036426667428152032ULL;
unsigned char var_11 = (unsigned char)72;
int zero = 0;
unsigned char var_12 = (unsigned char)59;
signed char var_13 = (signed char)24;
unsigned int var_14 = 1642363648U;
signed char var_15 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
