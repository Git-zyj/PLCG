#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned short var_4 = (unsigned short)51771;
signed char var_6 = (signed char)62;
unsigned char var_9 = (unsigned char)165;
int zero = 0;
unsigned short var_15 = (unsigned short)60274;
long long int var_16 = -5435231507634181219LL;
signed char var_17 = (signed char)-69;
void init() {
}

void checksum() {
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
