#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5311;
unsigned int var_4 = 1047072145U;
int var_6 = 344921146;
short var_7 = (short)27133;
unsigned int var_10 = 3635223498U;
unsigned int var_11 = 3965485718U;
int zero = 0;
unsigned int var_15 = 2219985796U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
