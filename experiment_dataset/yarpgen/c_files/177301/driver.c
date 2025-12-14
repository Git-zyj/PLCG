#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49701;
unsigned short var_1 = (unsigned short)40912;
unsigned short var_3 = (unsigned short)19191;
unsigned short var_6 = (unsigned short)55972;
unsigned short var_7 = (unsigned short)28246;
unsigned short var_12 = (unsigned short)51551;
int zero = 0;
unsigned short var_14 = (unsigned short)39484;
unsigned short var_15 = (unsigned short)46893;
unsigned short var_16 = (unsigned short)20355;
unsigned short var_17 = (unsigned short)35423;
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
