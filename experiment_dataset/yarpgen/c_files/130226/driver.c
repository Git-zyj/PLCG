#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2028045791;
signed char var_1 = (signed char)-50;
int var_3 = -1812440800;
unsigned int var_5 = 357410476U;
short var_7 = (short)-9906;
unsigned char var_9 = (unsigned char)3;
int zero = 0;
int var_10 = -1852568706;
unsigned long long int var_11 = 15192811809017345628ULL;
short var_12 = (short)8203;
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
