#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)43926;
long long int var_8 = 7832622656367412012LL;
long long int var_11 = 2054466411236590141LL;
short var_12 = (short)-14260;
short var_18 = (short)1503;
int zero = 0;
int var_19 = -1157436493;
unsigned int var_20 = 2929364291U;
unsigned char var_21 = (unsigned char)63;
long long int var_22 = -1459453995507424857LL;
int var_23 = -1469970692;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
