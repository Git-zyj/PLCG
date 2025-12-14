#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15620;
short var_3 = (short)-9566;
unsigned int var_4 = 1867780486U;
short var_6 = (short)28876;
long long int var_9 = -7892413708364396482LL;
long long int var_10 = -7475194959049802617LL;
int zero = 0;
unsigned short var_11 = (unsigned short)57725;
unsigned long long int var_12 = 12537726210012760946ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
