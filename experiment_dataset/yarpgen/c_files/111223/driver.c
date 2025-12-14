#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8410394368342726875LL;
short var_5 = (short)-12762;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_12 = -27518452747207223LL;
unsigned long long int var_13 = 10022713965887898071ULL;
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
