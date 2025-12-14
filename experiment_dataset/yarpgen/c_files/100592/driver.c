#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
short var_2 = (short)11048;
short var_4 = (short)-16594;
long long int var_8 = 8829206175961657178LL;
int var_12 = 1033349404;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2977283894U;
int zero = 0;
unsigned int var_17 = 2910691104U;
unsigned int var_18 = 269558032U;
int var_19 = 1139014272;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
