#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2631528173U;
long long int var_8 = 6154749721358920605LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_19 = 685778052;
unsigned long long int var_20 = 16282053149751656801ULL;
unsigned long long int var_21 = 17003645601050507160ULL;
signed char var_22 = (signed char)-122;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
