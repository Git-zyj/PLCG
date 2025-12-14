#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14891;
long long int var_2 = -511511176050124623LL;
short var_9 = (short)-21313;
int zero = 0;
unsigned char var_15 = (unsigned char)89;
short var_16 = (short)23327;
signed char var_17 = (signed char)-61;
unsigned int var_18 = 1573869575U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
