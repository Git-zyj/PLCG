#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11937;
unsigned char var_8 = (unsigned char)100;
unsigned short var_10 = (unsigned short)47478;
int zero = 0;
signed char var_12 = (signed char)71;
unsigned int var_13 = 949160004U;
long long int var_14 = -8418762534763615130LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
