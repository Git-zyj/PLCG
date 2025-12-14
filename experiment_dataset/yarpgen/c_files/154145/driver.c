#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2771999006U;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_11 = (signed char)-49;
int zero = 0;
unsigned long long int var_17 = 8063791690906181695ULL;
long long int var_18 = -6827215371383430218LL;
int var_19 = 1432647197;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
