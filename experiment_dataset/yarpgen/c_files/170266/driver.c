#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-3;
long long int var_3 = 7117234845755369707LL;
short var_4 = (short)-6264;
unsigned char var_9 = (unsigned char)178;
int zero = 0;
short var_10 = (short)18925;
int var_11 = -888931498;
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
