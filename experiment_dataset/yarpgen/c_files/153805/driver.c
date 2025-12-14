#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)33;
short var_5 = (short)-29393;
short var_8 = (short)-23731;
unsigned int var_9 = 3658929226U;
long long int var_12 = 7597910627417449612LL;
long long int var_13 = 1420490661509445754LL;
int zero = 0;
long long int var_15 = -2161485128010045330LL;
unsigned char var_16 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
