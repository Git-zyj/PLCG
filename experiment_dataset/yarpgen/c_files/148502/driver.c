#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5961231082182931423LL;
long long int var_3 = 6984835233452965541LL;
unsigned long long int var_5 = 6198086958317963701ULL;
int zero = 0;
int var_11 = 209569900;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)101;
signed char var_14 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
