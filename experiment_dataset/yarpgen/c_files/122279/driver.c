#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)115;
unsigned int var_5 = 2263577030U;
unsigned long long int var_13 = 4440347807968686700ULL;
short var_17 = (short)18368;
signed char var_18 = (signed char)104;
int zero = 0;
long long int var_20 = 2816707238304213417LL;
signed char var_21 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
