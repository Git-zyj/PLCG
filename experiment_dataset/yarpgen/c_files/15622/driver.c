#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -935425883;
unsigned int var_2 = 531223486U;
unsigned short var_3 = (unsigned short)51777;
short var_4 = (short)21828;
unsigned char var_6 = (unsigned char)219;
signed char var_7 = (signed char)-107;
signed char var_10 = (signed char)22;
short var_11 = (short)19755;
unsigned char var_12 = (unsigned char)208;
signed char var_13 = (signed char)91;
int zero = 0;
unsigned char var_15 = (unsigned char)24;
unsigned long long int var_16 = 10742557395406046076ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
