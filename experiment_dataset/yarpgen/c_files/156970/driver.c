#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1220566458U;
unsigned int var_7 = 86527465U;
signed char var_8 = (signed char)62;
unsigned int var_11 = 1054297024U;
int zero = 0;
int var_13 = -135593082;
unsigned short var_14 = (unsigned short)26073;
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
