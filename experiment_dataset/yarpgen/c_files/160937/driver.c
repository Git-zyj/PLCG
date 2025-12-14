#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
long long int var_1 = -5866231330585475378LL;
unsigned char var_2 = (unsigned char)118;
long long int var_5 = 1099888292416554081LL;
_Bool var_7 = (_Bool)0;
int var_11 = -764229400;
int zero = 0;
unsigned char var_12 = (unsigned char)145;
unsigned char var_13 = (unsigned char)221;
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
