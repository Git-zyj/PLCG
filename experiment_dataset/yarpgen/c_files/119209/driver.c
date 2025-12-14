#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 269123954U;
signed char var_8 = (signed char)38;
unsigned char var_12 = (unsigned char)130;
int zero = 0;
long long int var_15 = 6568288058843653007LL;
unsigned short var_16 = (unsigned short)61971;
void init() {
}

void checksum() {
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
