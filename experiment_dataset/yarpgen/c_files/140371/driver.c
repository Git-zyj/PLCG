#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20387;
unsigned int var_5 = 3625753949U;
unsigned short var_10 = (unsigned short)26008;
int zero = 0;
unsigned char var_12 = (unsigned char)183;
unsigned char var_13 = (unsigned char)108;
unsigned char var_14 = (unsigned char)178;
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
