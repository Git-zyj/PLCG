#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-108;
long long int var_8 = 8134383971811478710LL;
unsigned long long int var_9 = 17887372004436726075ULL;
short var_10 = (short)-3820;
long long int var_13 = -296443601430917974LL;
int zero = 0;
unsigned int var_14 = 4173841877U;
unsigned long long int var_15 = 15148007383485312363ULL;
unsigned char var_16 = (unsigned char)11;
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
