#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 4588539679985519904ULL;
long long int var_7 = -6072118382087362192LL;
unsigned char var_11 = (unsigned char)18;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 11492805660144198585ULL;
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
