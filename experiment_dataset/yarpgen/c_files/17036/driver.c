#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4275015719642069656ULL;
int var_8 = -744532117;
unsigned int var_12 = 2173175717U;
unsigned short var_13 = (unsigned short)16123;
int zero = 0;
short var_20 = (short)-8855;
unsigned int var_21 = 3553739186U;
void init() {
}

void checksum() {
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
