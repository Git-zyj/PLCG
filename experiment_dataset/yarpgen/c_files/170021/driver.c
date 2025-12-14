#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
signed char var_3 = (signed char)37;
unsigned long long int var_4 = 10197923854762962675ULL;
signed char var_8 = (signed char)-99;
short var_9 = (short)27069;
signed char var_10 = (signed char)76;
int zero = 0;
unsigned short var_14 = (unsigned short)27352;
signed char var_15 = (signed char)90;
unsigned short var_16 = (unsigned short)20797;
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
