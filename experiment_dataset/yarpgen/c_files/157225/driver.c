#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25352;
unsigned long long int var_4 = 12607549231477665730ULL;
unsigned long long int var_8 = 11731173663468225684ULL;
int var_12 = 1659752539;
int var_13 = 1997827071;
unsigned short var_14 = (unsigned short)19143;
int zero = 0;
short var_16 = (short)-9537;
unsigned long long int var_17 = 18398383451908271806ULL;
unsigned long long int var_18 = 9036093770907414959ULL;
void init() {
}

void checksum() {
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
