#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_8 = (short)-27487;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-25570;
short var_14 = (short)-11788;
int zero = 0;
short var_16 = (short)6671;
int var_17 = -2106187595;
int var_18 = -1114350269;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
