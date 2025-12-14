#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 335023748920185295ULL;
int var_4 = 1260832113;
short var_8 = (short)31695;
int zero = 0;
unsigned long long int var_17 = 6702145677344613472ULL;
unsigned char var_18 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
