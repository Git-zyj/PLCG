#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 7419608314501178203ULL;
unsigned short var_2 = (unsigned short)11339;
unsigned short var_6 = (unsigned short)40910;
long long int var_14 = -6424163730572612902LL;
long long int var_17 = 6052962332552799226LL;
int zero = 0;
unsigned short var_19 = (unsigned short)12661;
unsigned long long int var_20 = 5660477703238806142ULL;
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
