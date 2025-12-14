#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-61;
unsigned char var_5 = (unsigned char)24;
signed char var_7 = (signed char)63;
int var_8 = 76048780;
int var_11 = -335691308;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 2032960275;
unsigned int var_14 = 1657424185U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
