#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
unsigned char var_1 = (unsigned char)180;
signed char var_5 = (signed char)-20;
short var_6 = (short)13626;
unsigned int var_9 = 2138095286U;
short var_10 = (short)-7248;
short var_13 = (short)-26183;
int zero = 0;
unsigned short var_16 = (unsigned short)25145;
short var_17 = (short)21103;
void init() {
}

void checksum() {
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
