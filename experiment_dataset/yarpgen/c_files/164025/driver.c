#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
short var_2 = (short)-20358;
short var_3 = (short)10847;
int zero = 0;
unsigned char var_10 = (unsigned char)79;
unsigned long long int var_11 = 313969682674463879ULL;
unsigned char var_12 = (unsigned char)205;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
