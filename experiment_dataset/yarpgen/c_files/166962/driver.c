#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)207;
long long int var_4 = -1453277508545101642LL;
short var_6 = (short)25908;
long long int var_7 = -5393419478169747074LL;
short var_9 = (short)15143;
int var_15 = -1999733883;
int zero = 0;
unsigned char var_16 = (unsigned char)162;
unsigned char var_17 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
