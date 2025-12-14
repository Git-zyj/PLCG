#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 969174523U;
_Bool var_7 = (_Bool)0;
long long int var_14 = -7079260820866070900LL;
int var_17 = -1939600130;
int zero = 0;
unsigned int var_19 = 2554358273U;
unsigned int var_20 = 2416599117U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
