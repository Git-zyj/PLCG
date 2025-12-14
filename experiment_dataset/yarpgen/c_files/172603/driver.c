#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2137478955;
int var_1 = 1271676516;
unsigned int var_2 = 2400513629U;
unsigned int var_4 = 765755001U;
int var_9 = -40460901;
int var_16 = 538582678;
int zero = 0;
short var_18 = (short)28808;
signed char var_19 = (signed char)-117;
unsigned char var_20 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
