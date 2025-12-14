#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)100;
int var_6 = -1633424902;
short var_7 = (short)14568;
signed char var_11 = (signed char)-6;
unsigned char var_13 = (unsigned char)42;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-64;
int var_20 = -1492008239;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
