#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 735121211;
unsigned short var_7 = (unsigned short)59911;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)56633;
int zero = 0;
unsigned char var_10 = (unsigned char)226;
unsigned long long int var_11 = 2847968356508960765ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
