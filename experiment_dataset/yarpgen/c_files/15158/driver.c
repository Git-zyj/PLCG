#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1313416793;
long long int var_2 = 394297389592931995LL;
long long int var_5 = -1774924167137870608LL;
int var_6 = -1180534319;
long long int var_7 = -8086293715086675812LL;
unsigned short var_9 = (unsigned short)64233;
unsigned char var_11 = (unsigned char)48;
int zero = 0;
long long int var_14 = -1510708997222400078LL;
long long int var_15 = -2385276355267449310LL;
unsigned short var_16 = (unsigned short)29639;
signed char var_17 = (signed char)71;
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
