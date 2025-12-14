#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)75;
long long int var_6 = -7772499953031526877LL;
_Bool var_7 = (_Bool)1;
int var_8 = 1672148007;
unsigned char var_13 = (unsigned char)42;
int zero = 0;
int var_16 = -2135972380;
unsigned long long int var_17 = 15621263158017610165ULL;
unsigned char var_18 = (unsigned char)113;
short var_19 = (short)-17967;
unsigned char var_20 = (unsigned char)23;
unsigned char var_21 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
