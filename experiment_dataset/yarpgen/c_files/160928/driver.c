#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4634;
unsigned short var_5 = (unsigned short)28509;
unsigned short var_6 = (unsigned short)51541;
int var_8 = 1133487049;
int var_9 = 1126698442;
long long int var_10 = -958525003408442968LL;
unsigned char var_11 = (unsigned char)47;
int zero = 0;
short var_14 = (short)-19405;
long long int var_15 = -710466108434128940LL;
long long int var_16 = -6803022437394282322LL;
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
