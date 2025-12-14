#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -782863865673074863LL;
unsigned int var_5 = 226012568U;
signed char var_10 = (signed char)-69;
int zero = 0;
signed char var_13 = (signed char)85;
unsigned int var_14 = 3825168231U;
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
