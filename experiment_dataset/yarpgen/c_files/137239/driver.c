#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30114;
long long int var_3 = -7273054280905215592LL;
int var_4 = -1523898088;
unsigned short var_5 = (unsigned short)12058;
signed char var_8 = (signed char)-71;
int zero = 0;
int var_12 = 1926429822;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
