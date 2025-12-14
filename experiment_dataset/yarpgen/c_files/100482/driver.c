#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6437857010925133660LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-106;
signed char var_11 = (signed char)86;
signed char var_12 = (signed char)-81;
long long int var_13 = 7371747742292187590LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
