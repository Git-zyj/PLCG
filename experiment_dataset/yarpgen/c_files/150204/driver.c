#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6499;
unsigned long long int var_1 = 3012014808078880748ULL;
long long int var_2 = 8724744527584331462LL;
unsigned long long int var_3 = 18388786420074854338ULL;
signed char var_6 = (signed char)-68;
signed char var_15 = (signed char)76;
int zero = 0;
short var_16 = (short)30797;
signed char var_17 = (signed char)50;
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
