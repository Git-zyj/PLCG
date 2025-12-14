#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18203;
_Bool var_1 = (_Bool)1;
long long int var_7 = 9117830397317548486LL;
unsigned long long int var_14 = 4459985165201327021ULL;
unsigned char var_16 = (unsigned char)210;
int zero = 0;
unsigned int var_20 = 59288750U;
int var_21 = 558975437;
signed char var_22 = (signed char)78;
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
