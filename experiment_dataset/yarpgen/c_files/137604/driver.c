#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1933509509;
unsigned int var_10 = 472728924U;
unsigned long long int var_13 = 3882597734835673492ULL;
int zero = 0;
short var_14 = (short)5688;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
