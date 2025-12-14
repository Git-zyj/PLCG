#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1751428891849705874LL;
signed char var_5 = (signed char)69;
signed char var_8 = (signed char)20;
long long int var_12 = 702213809627777335LL;
int zero = 0;
unsigned char var_13 = (unsigned char)225;
short var_14 = (short)14947;
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
