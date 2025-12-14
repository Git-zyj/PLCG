#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)76;
signed char var_8 = (signed char)-54;
int zero = 0;
unsigned int var_12 = 2332214387U;
unsigned long long int var_13 = 11082829607846766236ULL;
signed char var_14 = (signed char)21;
signed char var_15 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
