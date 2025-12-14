#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
unsigned char var_1 = (unsigned char)169;
long long int var_2 = -3222519512765406741LL;
unsigned short var_3 = (unsigned short)2779;
short var_4 = (short)-4069;
signed char var_5 = (signed char)-22;
unsigned short var_6 = (unsigned short)51229;
int var_8 = -1858285767;
unsigned int var_9 = 2063295362U;
unsigned long long int var_12 = 15646569571148882474ULL;
int var_13 = 2065510601;
int zero = 0;
long long int var_14 = 4099581394106163759LL;
unsigned char var_15 = (unsigned char)38;
signed char var_16 = (signed char)29;
long long int var_17 = -3375421980562954200LL;
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
