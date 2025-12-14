#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
unsigned int var_14 = 145430442U;
unsigned int var_15 = 1388176804U;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_20 = 5518455679170221439LL;
unsigned int var_21 = 3833248043U;
unsigned int var_22 = 301527587U;
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
