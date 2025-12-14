#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
unsigned long long int var_4 = 7908408879844761807ULL;
_Bool var_6 = (_Bool)0;
int var_14 = -1474535204;
int zero = 0;
int var_18 = 1007327226;
unsigned int var_19 = 254719613U;
int var_20 = 1899635196;
unsigned int var_21 = 3995348054U;
unsigned int var_22 = 3861419886U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
