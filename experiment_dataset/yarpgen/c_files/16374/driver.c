#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
unsigned int var_3 = 3556190163U;
signed char var_4 = (signed char)-57;
int var_7 = -348888024;
long long int var_8 = 5488978030178535555LL;
int zero = 0;
unsigned short var_10 = (unsigned short)54562;
unsigned short var_11 = (unsigned short)47107;
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
