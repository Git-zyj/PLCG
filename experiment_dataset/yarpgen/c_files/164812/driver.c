#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)202;
signed char var_1 = (signed char)-91;
short var_9 = (short)4955;
long long int var_11 = -8776183701647585814LL;
int zero = 0;
unsigned long long int var_15 = 13355248482295982144ULL;
signed char var_16 = (signed char)-16;
unsigned long long int var_17 = 3607090690072002704ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
