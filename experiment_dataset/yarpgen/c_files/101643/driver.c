#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64238;
unsigned char var_5 = (unsigned char)253;
unsigned short var_6 = (unsigned short)29336;
unsigned short var_9 = (unsigned short)15630;
int var_11 = -2007731639;
int zero = 0;
long long int var_14 = 90497444125770481LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)577;
unsigned char var_17 = (unsigned char)79;
void init() {
}

void checksum() {
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
