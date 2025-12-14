#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1017836717;
unsigned char var_5 = (unsigned char)136;
_Bool var_11 = (_Bool)1;
int var_13 = 440563412;
int zero = 0;
long long int var_16 = 6614281382073108836LL;
signed char var_17 = (signed char)117;
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
