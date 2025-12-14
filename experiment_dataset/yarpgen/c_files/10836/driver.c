#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-8;
_Bool var_8 = (_Bool)1;
long long int var_10 = -2240739752209300626LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 12757911377402339488ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
