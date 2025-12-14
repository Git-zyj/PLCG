#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 1128952412148225881LL;
signed char var_7 = (signed char)69;
unsigned long long int var_9 = 1675355267296134880ULL;
int zero = 0;
int var_11 = -635840999;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 15243522230565093561ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
