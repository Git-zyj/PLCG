#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -8906512284100302543LL;
short var_9 = (short)-3665;
long long int var_12 = -6517578063063128361LL;
unsigned char var_13 = (unsigned char)29;
unsigned long long int var_14 = 6155629031316207381ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)37211;
unsigned short var_18 = (unsigned short)63420;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
