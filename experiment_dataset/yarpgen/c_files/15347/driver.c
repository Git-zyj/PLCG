#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2474336010U;
unsigned short var_5 = (unsigned short)20930;
unsigned char var_10 = (unsigned char)250;
unsigned short var_11 = (unsigned short)31405;
unsigned short var_13 = (unsigned short)37818;
unsigned short var_15 = (unsigned short)25486;
unsigned int var_17 = 317074475U;
unsigned short var_18 = (unsigned short)39355;
int zero = 0;
unsigned int var_19 = 1398611076U;
unsigned char var_20 = (unsigned char)17;
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
