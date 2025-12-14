#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16203;
unsigned char var_1 = (unsigned char)52;
unsigned long long int var_8 = 12309617766643284145ULL;
unsigned int var_9 = 739342437U;
long long int var_11 = 991944294861966326LL;
long long int var_12 = -3409486555897488263LL;
int zero = 0;
long long int var_14 = -524989261695018859LL;
short var_15 = (short)-9772;
long long int var_16 = 551344930150776068LL;
void init() {
}

void checksum() {
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
