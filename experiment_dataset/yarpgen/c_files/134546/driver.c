#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)31;
short var_5 = (short)9745;
short var_9 = (short)27365;
int var_15 = -964117223;
unsigned char var_16 = (unsigned char)43;
int zero = 0;
short var_18 = (short)-16389;
short var_19 = (short)-14547;
unsigned int var_20 = 2290480729U;
unsigned char var_21 = (unsigned char)212;
unsigned short var_22 = (unsigned short)58448;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
