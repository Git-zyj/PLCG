#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5383710330942614839LL;
int var_3 = -941921656;
unsigned char var_4 = (unsigned char)19;
unsigned short var_8 = (unsigned short)15338;
unsigned int var_11 = 597398555U;
int zero = 0;
long long int var_13 = -7957674534006738748LL;
short var_14 = (short)-10457;
long long int var_15 = 3047264621867984492LL;
unsigned int var_16 = 1232362490U;
short var_17 = (short)11606;
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
