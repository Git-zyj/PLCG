#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1153190777U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3868233570U;
unsigned short var_10 = (unsigned short)44646;
int zero = 0;
short var_14 = (short)15787;
int var_15 = -470228491;
long long int var_16 = 9196126903773633744LL;
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
