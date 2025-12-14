#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5048044814830846338ULL;
unsigned char var_11 = (unsigned char)226;
unsigned short var_14 = (unsigned short)38457;
signed char var_15 = (signed char)-14;
int var_16 = 693371252;
unsigned short var_17 = (unsigned short)2454;
int zero = 0;
unsigned char var_19 = (unsigned char)105;
int var_20 = -644291789;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
