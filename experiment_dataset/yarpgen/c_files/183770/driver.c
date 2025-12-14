#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
unsigned long long int var_4 = 3844254771296053121ULL;
signed char var_10 = (signed char)68;
signed char var_12 = (signed char)97;
int zero = 0;
signed char var_16 = (signed char)72;
unsigned int var_17 = 236017221U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
