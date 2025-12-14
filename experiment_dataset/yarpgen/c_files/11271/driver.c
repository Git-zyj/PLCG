#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2513652359U;
signed char var_8 = (signed char)88;
signed char var_11 = (signed char)-96;
int var_12 = 1066617677;
int zero = 0;
long long int var_13 = 6065238097623514952LL;
unsigned char var_14 = (unsigned char)52;
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
