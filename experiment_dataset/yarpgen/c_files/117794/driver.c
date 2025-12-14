#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17609967275880326421ULL;
short var_5 = (short)-1073;
signed char var_6 = (signed char)43;
unsigned short var_8 = (unsigned short)3168;
unsigned char var_9 = (unsigned char)245;
unsigned char var_11 = (unsigned char)114;
int zero = 0;
short var_12 = (short)11191;
short var_13 = (short)6631;
unsigned long long int var_14 = 14139563862548198290ULL;
unsigned long long int var_15 = 3507573420513263669ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
