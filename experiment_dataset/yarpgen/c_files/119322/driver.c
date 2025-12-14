#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)175;
unsigned long long int var_10 = 16872901158807427332ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)29024;
unsigned short var_17 = (unsigned short)37556;
int var_18 = -313512760;
signed char var_19 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
