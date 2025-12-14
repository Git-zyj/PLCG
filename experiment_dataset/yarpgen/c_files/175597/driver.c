#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11819;
int var_3 = -136048679;
unsigned int var_4 = 2094761486U;
long long int var_5 = 1436042781029598200LL;
unsigned short var_8 = (unsigned short)19014;
unsigned int var_9 = 3809888628U;
unsigned short var_10 = (unsigned short)27541;
int zero = 0;
signed char var_11 = (signed char)-102;
int var_12 = -198024128;
int var_13 = -474387362;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
