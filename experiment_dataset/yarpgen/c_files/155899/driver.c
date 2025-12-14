#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 322389318;
unsigned char var_8 = (unsigned char)201;
unsigned short var_9 = (unsigned short)25801;
short var_13 = (short)28427;
int zero = 0;
unsigned int var_18 = 3751355008U;
unsigned short var_19 = (unsigned short)19614;
unsigned int var_20 = 3681762703U;
unsigned long long int var_21 = 3887078395175715579ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
