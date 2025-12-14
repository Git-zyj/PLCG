#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 643787186U;
int var_8 = -1783997533;
short var_10 = (short)27182;
signed char var_12 = (signed char)25;
int var_19 = -756981817;
int zero = 0;
unsigned char var_20 = (unsigned char)72;
unsigned char var_21 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
