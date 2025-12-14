#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)25;
unsigned int var_5 = 3267118194U;
unsigned int var_6 = 3384902279U;
long long int var_7 = 6199185846585723984LL;
int zero = 0;
unsigned short var_10 = (unsigned short)26491;
unsigned short var_11 = (unsigned short)28226;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
