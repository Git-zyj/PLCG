#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)124;
unsigned short var_6 = (unsigned short)51843;
int var_12 = -1008192295;
unsigned short var_13 = (unsigned short)4904;
int zero = 0;
signed char var_19 = (signed char)-57;
unsigned long long int var_20 = 15247847968217736035ULL;
int var_21 = -2125705956;
int var_22 = -1924184665;
short var_23 = (short)-17416;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
