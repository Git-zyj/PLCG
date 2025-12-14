#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 13121870228902468367ULL;
int var_5 = 372546526;
unsigned char var_6 = (unsigned char)98;
int var_7 = 1266624464;
signed char var_8 = (signed char)-35;
int zero = 0;
short var_14 = (short)25318;
int var_15 = -784676653;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
