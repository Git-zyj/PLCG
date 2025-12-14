#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5791393329805415556LL;
_Bool var_2 = (_Bool)1;
int var_5 = -33193724;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1685562762U;
unsigned int var_14 = 1850830260U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
