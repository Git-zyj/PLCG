#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5784;
unsigned char var_4 = (unsigned char)44;
unsigned long long int var_8 = 1868423020018683865ULL;
int var_10 = -2123155310;
unsigned char var_12 = (unsigned char)211;
int zero = 0;
unsigned char var_13 = (unsigned char)170;
long long int var_14 = -378397583485082788LL;
unsigned int var_15 = 2038280926U;
unsigned long long int var_16 = 4227359317288860317ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
