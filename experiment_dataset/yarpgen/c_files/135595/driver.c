#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)123;
unsigned short var_8 = (unsigned short)30445;
unsigned short var_9 = (unsigned short)20242;
signed char var_12 = (signed char)-65;
int zero = 0;
short var_16 = (short)-30031;
short var_17 = (short)20296;
unsigned char var_18 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
