#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
unsigned int var_1 = 2356698094U;
signed char var_5 = (signed char)-83;
short var_7 = (short)8732;
int zero = 0;
short var_10 = (short)6616;
long long int var_11 = -5560627935298325630LL;
int var_12 = -2039369595;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
