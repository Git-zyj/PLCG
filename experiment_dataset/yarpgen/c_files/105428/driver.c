#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51107;
int var_2 = 1532106659;
short var_3 = (short)21083;
signed char var_12 = (signed char)68;
int zero = 0;
signed char var_14 = (signed char)-78;
unsigned int var_15 = 3305910300U;
void init() {
}

void checksum() {
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
