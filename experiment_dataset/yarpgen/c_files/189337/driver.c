#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -682673979217770957LL;
int var_1 = -465010483;
signed char var_8 = (signed char)-4;
unsigned short var_9 = (unsigned short)2516;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)75;
short var_16 = (short)-7311;
unsigned char var_17 = (unsigned char)228;
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
