#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
long long int var_3 = 719100009266853716LL;
signed char var_5 = (signed char)-31;
short var_7 = (short)-21954;
int zero = 0;
signed char var_11 = (signed char)-34;
signed char var_12 = (signed char)38;
short var_13 = (short)18378;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
