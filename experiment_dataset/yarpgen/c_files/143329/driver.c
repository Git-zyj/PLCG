#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1842;
unsigned int var_4 = 690386074U;
signed char var_6 = (signed char)-78;
unsigned long long int var_9 = 13646808832503757400ULL;
unsigned long long int var_10 = 6252144251346080357ULL;
int zero = 0;
unsigned long long int var_14 = 15639162242204031059ULL;
unsigned short var_15 = (unsigned short)37706;
unsigned short var_16 = (unsigned short)7772;
void init() {
}

void checksum() {
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
