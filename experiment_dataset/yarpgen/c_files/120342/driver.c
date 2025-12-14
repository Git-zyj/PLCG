#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1786705956;
_Bool var_7 = (_Bool)0;
unsigned short var_12 = (unsigned short)57460;
int zero = 0;
unsigned int var_13 = 3210397201U;
int var_14 = 2058444304;
void init() {
}

void checksum() {
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
