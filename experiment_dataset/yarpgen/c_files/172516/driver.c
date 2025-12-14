#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-4;
signed char var_3 = (signed char)18;
long long int var_6 = 1492615864576672585LL;
long long int var_8 = 1926906596087152255LL;
short var_9 = (short)11486;
unsigned char var_10 = (unsigned char)215;
unsigned short var_11 = (unsigned short)56955;
int zero = 0;
signed char var_15 = (signed char)63;
long long int var_16 = 4035382056595871467LL;
unsigned int var_17 = 3090939773U;
short var_18 = (short)-21479;
signed char var_19 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
