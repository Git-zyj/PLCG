#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3325407741949385974LL;
long long int var_8 = -9205790382890542188LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -1792562084;
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
