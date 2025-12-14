#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3268634964379259655LL;
unsigned long long int var_1 = 17694960592470123060ULL;
unsigned int var_6 = 4007977582U;
int zero = 0;
signed char var_10 = (signed char)101;
short var_11 = (short)13881;
unsigned int var_12 = 303506579U;
int var_13 = -684043072;
int var_14 = -1531887260;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
