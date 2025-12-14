#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36848;
_Bool var_8 = (_Bool)0;
long long int var_11 = -3412260863796552994LL;
int zero = 0;
short var_14 = (short)270;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-11560;
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
