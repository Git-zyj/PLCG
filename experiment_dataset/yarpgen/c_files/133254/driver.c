#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_8 = (short)7126;
short var_9 = (short)11490;
unsigned int var_11 = 3018084116U;
unsigned short var_14 = (unsigned short)25452;
int zero = 0;
unsigned int var_20 = 3913773745U;
unsigned short var_21 = (unsigned short)35479;
unsigned char var_22 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
