#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8022028305424458785LL;
unsigned char var_1 = (unsigned char)244;
unsigned short var_2 = (unsigned short)22341;
unsigned short var_3 = (unsigned short)12276;
signed char var_7 = (signed char)-106;
unsigned int var_8 = 4141142769U;
unsigned short var_9 = (unsigned short)29316;
unsigned short var_10 = (unsigned short)44156;
unsigned long long int var_12 = 12189814787140972462ULL;
signed char var_13 = (signed char)-86;
int zero = 0;
unsigned int var_14 = 194336871U;
unsigned long long int var_15 = 13647362310830889518ULL;
unsigned long long int var_16 = 10016546265168118328ULL;
void init() {
}

void checksum() {
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
