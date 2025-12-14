#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
short var_1 = (short)15066;
unsigned int var_2 = 431932124U;
int var_3 = -1551682728;
unsigned char var_4 = (unsigned char)24;
short var_6 = (short)5271;
short var_7 = (short)31307;
signed char var_8 = (signed char)-23;
int zero = 0;
unsigned int var_10 = 2884498192U;
unsigned int var_11 = 3574964137U;
unsigned char var_12 = (unsigned char)163;
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
