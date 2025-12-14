#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)62103;
signed char var_5 = (signed char)37;
signed char var_8 = (signed char)-57;
short var_9 = (short)-6530;
short var_11 = (short)2365;
unsigned short var_12 = (unsigned short)30411;
int zero = 0;
short var_16 = (short)-16987;
signed char var_17 = (signed char)43;
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
