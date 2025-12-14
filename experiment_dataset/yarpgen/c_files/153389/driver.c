#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
int var_1 = 1866824381;
int var_4 = 178020670;
long long int var_5 = 1162071139310915666LL;
unsigned char var_7 = (unsigned char)17;
unsigned char var_9 = (unsigned char)119;
long long int var_10 = -9198268966394867647LL;
int var_12 = -501920008;
long long int var_13 = -258036599925052365LL;
int var_15 = 1403802955;
int zero = 0;
unsigned char var_20 = (unsigned char)59;
int var_21 = 1541458812;
int var_22 = 153389127;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
