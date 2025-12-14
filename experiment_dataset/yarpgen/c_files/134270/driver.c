#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)31;
unsigned short var_3 = (unsigned short)62726;
unsigned short var_4 = (unsigned short)7190;
unsigned int var_6 = 244709043U;
short var_7 = (short)-29672;
unsigned short var_9 = (unsigned short)28619;
unsigned char var_11 = (unsigned char)31;
int zero = 0;
unsigned long long int var_14 = 9089834005884943116ULL;
long long int var_15 = 3010704890922114132LL;
unsigned short var_16 = (unsigned short)35340;
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
