#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1752882797621281260LL;
int var_9 = 995614360;
short var_13 = (short)-16174;
int var_15 = -330144243;
int zero = 0;
short var_16 = (short)-9598;
unsigned short var_17 = (unsigned short)27965;
unsigned char var_18 = (unsigned char)74;
unsigned short var_19 = (unsigned short)44146;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
