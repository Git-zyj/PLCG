#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 3773928630873966522ULL;
long long int var_8 = -385858428597966059LL;
int zero = 0;
unsigned char var_12 = (unsigned char)212;
unsigned int var_13 = 3879591441U;
unsigned short var_14 = (unsigned short)41487;
int var_15 = 1120534234;
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
