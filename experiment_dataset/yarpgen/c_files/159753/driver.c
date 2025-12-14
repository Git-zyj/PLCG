#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-14672;
short var_5 = (short)-13793;
unsigned short var_8 = (unsigned short)35294;
int zero = 0;
long long int var_10 = -7525733952529903975LL;
signed char var_11 = (signed char)74;
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
