#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15600;
unsigned int var_5 = 2334944775U;
unsigned char var_6 = (unsigned char)207;
unsigned int var_9 = 4104924057U;
int zero = 0;
short var_13 = (short)-26930;
unsigned char var_14 = (unsigned char)158;
unsigned int var_15 = 4099708691U;
short var_16 = (short)-14799;
short var_17 = (short)25188;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
