#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)47845;
short var_7 = (short)-16758;
int var_9 = 1910686261;
int var_11 = -1485750310;
int var_12 = 1322074922;
int var_13 = 277073241;
int zero = 0;
unsigned char var_14 = (unsigned char)112;
long long int var_15 = -3975307414768105574LL;
void init() {
}

void checksum() {
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
