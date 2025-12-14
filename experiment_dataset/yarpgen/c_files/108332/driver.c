#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1069579335U;
signed char var_8 = (signed char)105;
signed char var_10 = (signed char)-14;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-4;
long long int var_22 = 2161336733974660753LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
