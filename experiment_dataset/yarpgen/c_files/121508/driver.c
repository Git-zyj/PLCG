#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-96;
unsigned long long int var_11 = 16965898740520491178ULL;
int zero = 0;
int var_20 = 25654773;
long long int var_21 = -4731010264584283142LL;
unsigned char var_22 = (unsigned char)241;
short var_23 = (short)-24570;
unsigned short var_24 = (unsigned short)792;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
