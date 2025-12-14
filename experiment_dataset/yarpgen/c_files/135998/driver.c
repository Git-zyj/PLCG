#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -340831483;
short var_10 = (short)1376;
signed char var_12 = (signed char)15;
unsigned short var_13 = (unsigned short)65434;
int zero = 0;
short var_19 = (short)-24403;
signed char var_20 = (signed char)-4;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
