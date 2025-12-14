#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -827165259;
unsigned short var_5 = (unsigned short)22451;
unsigned long long int var_10 = 17035203736970920120ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)20414;
short var_12 = (short)13649;
signed char var_13 = (signed char)(-127 - 1);
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
