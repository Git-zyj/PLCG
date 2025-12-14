#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)116;
long long int var_7 = -6544701403768900348LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_10 = 548144799;
unsigned long long int var_11 = 787107610710155639ULL;
unsigned int var_12 = 1302610250U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
