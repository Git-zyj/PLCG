#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
signed char var_3 = (signed char)-4;
unsigned long long int var_5 = 9613494267752950658ULL;
short var_8 = (short)-11910;
unsigned short var_10 = (unsigned short)7584;
int zero = 0;
unsigned int var_13 = 4118552917U;
signed char var_14 = (signed char)59;
short var_15 = (short)24989;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
