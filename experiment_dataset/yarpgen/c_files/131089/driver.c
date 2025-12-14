#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
long long int var_9 = 1029346084731645156LL;
short var_10 = (short)-5701;
unsigned short var_14 = (unsigned short)27751;
int zero = 0;
long long int var_18 = -7802007817406037862LL;
short var_19 = (short)-16629;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
