#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7625;
unsigned char var_4 = (unsigned char)72;
unsigned long long int var_6 = 13842898201285863734ULL;
unsigned char var_7 = (unsigned char)160;
unsigned long long int var_11 = 17621919731505140643ULL;
int zero = 0;
short var_13 = (short)15478;
short var_14 = (short)14859;
unsigned char var_15 = (unsigned char)142;
int var_16 = 926052994;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
