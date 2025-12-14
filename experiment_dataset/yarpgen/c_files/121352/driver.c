#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -559797538;
long long int var_8 = -1725292006231852118LL;
short var_16 = (short)-18724;
int var_17 = -551247206;
int zero = 0;
long long int var_18 = -5435079404383310875LL;
unsigned char var_19 = (unsigned char)133;
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
