#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41846;
int var_3 = -2020923950;
unsigned short var_8 = (unsigned short)17395;
unsigned short var_12 = (unsigned short)36394;
int zero = 0;
unsigned long long int var_13 = 7806423774252469937ULL;
unsigned int var_14 = 2947087995U;
_Bool var_15 = (_Bool)1;
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
