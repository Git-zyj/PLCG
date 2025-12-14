#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1283976566403439936ULL;
long long int var_2 = 5899838813660376144LL;
short var_8 = (short)-14128;
unsigned long long int var_10 = 4369178762937230048ULL;
int zero = 0;
signed char var_14 = (signed char)-54;
unsigned short var_15 = (unsigned short)40405;
unsigned short var_16 = (unsigned short)33882;
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
