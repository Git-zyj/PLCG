#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)142;
long long int var_2 = 4030824887412951714LL;
unsigned int var_6 = 3557487008U;
unsigned long long int var_12 = 994886993232722065ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)230;
unsigned int var_20 = 955354U;
unsigned int var_21 = 3572793597U;
void init() {
}

void checksum() {
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
