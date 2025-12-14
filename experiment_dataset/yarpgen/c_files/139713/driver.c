#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 796803501;
signed char var_7 = (signed char)86;
long long int var_8 = -1633575771765757930LL;
unsigned long long int var_10 = 5555193757727676998ULL;
int zero = 0;
signed char var_12 = (signed char)-101;
unsigned short var_13 = (unsigned short)64461;
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
