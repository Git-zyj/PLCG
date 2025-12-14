#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1548726011;
unsigned short var_3 = (unsigned short)29261;
short var_5 = (short)13153;
unsigned short var_7 = (unsigned short)40518;
signed char var_8 = (signed char)(-127 - 1);
signed char var_9 = (signed char)36;
unsigned int var_11 = 1772892140U;
int zero = 0;
unsigned short var_12 = (unsigned short)48348;
unsigned int var_13 = 2197723563U;
unsigned short var_14 = (unsigned short)32420;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
