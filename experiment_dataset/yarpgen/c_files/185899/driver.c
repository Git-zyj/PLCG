#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-120;
unsigned short var_3 = (unsigned short)48938;
signed char var_7 = (signed char)-24;
long long int var_8 = -8189766353489279777LL;
short var_12 = (short)3634;
int zero = 0;
signed char var_17 = (signed char)-79;
short var_18 = (short)-9012;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
