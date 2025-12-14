#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1347456621022157402LL;
signed char var_7 = (signed char)100;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)80;
unsigned short var_14 = (unsigned short)44954;
signed char var_15 = (signed char)-32;
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
