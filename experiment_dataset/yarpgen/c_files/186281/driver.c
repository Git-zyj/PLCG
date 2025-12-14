#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -840827766270652250LL;
signed char var_6 = (signed char)-90;
unsigned long long int var_14 = 12423331645402322897ULL;
int zero = 0;
signed char var_16 = (signed char)6;
unsigned short var_17 = (unsigned short)31394;
unsigned short var_18 = (unsigned short)32850;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
