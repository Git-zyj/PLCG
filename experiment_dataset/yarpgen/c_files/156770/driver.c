#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4214363678U;
long long int var_2 = -1011323851640021854LL;
int var_5 = -1042922770;
unsigned char var_7 = (unsigned char)186;
unsigned long long int var_9 = 5343470310372215654ULL;
unsigned int var_11 = 2905446931U;
unsigned int var_12 = 1331866284U;
unsigned int var_13 = 1777074579U;
short var_14 = (short)13345;
int zero = 0;
unsigned int var_15 = 3950205597U;
unsigned char var_16 = (unsigned char)211;
short var_17 = (short)7920;
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
