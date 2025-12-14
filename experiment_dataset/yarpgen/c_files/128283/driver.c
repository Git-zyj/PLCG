#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1904073133;
short var_1 = (short)-6949;
signed char var_4 = (signed char)-22;
unsigned int var_5 = 3389626122U;
int var_7 = 894143574;
unsigned short var_8 = (unsigned short)23700;
signed char var_9 = (signed char)-75;
unsigned int var_10 = 1662885117U;
unsigned int var_11 = 1279831638U;
unsigned short var_12 = (unsigned short)47178;
int zero = 0;
int var_13 = -1837445747;
unsigned int var_14 = 3949174020U;
unsigned int var_15 = 3399836811U;
unsigned short var_16 = (unsigned short)27539;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
