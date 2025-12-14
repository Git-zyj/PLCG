#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6133595268094137256LL;
signed char var_7 = (signed char)-51;
long long int var_9 = -420924992085634769LL;
unsigned int var_11 = 1569956087U;
short var_17 = (short)14443;
int zero = 0;
long long int var_20 = -8132376206129476730LL;
unsigned char var_21 = (unsigned char)255;
void init() {
}

void checksum() {
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
