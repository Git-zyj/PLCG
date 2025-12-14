#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)232;
unsigned short var_9 = (unsigned short)34541;
long long int var_11 = -5568191999645734372LL;
unsigned short var_12 = (unsigned short)35743;
int zero = 0;
unsigned short var_19 = (unsigned short)54408;
short var_20 = (short)27079;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
