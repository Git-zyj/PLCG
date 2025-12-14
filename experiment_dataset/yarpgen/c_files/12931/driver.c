#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3522518648U;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned int var_16 = 599626702U;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -352834200;
void init() {
}

void checksum() {
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
