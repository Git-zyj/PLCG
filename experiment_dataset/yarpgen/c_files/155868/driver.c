#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)90;
unsigned int var_4 = 1214156993U;
unsigned short var_6 = (unsigned short)15588;
unsigned long long int var_8 = 2886111629008877810ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2819141302U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
