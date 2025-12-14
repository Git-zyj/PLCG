#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)245;
int var_3 = -1356102670;
unsigned long long int var_5 = 6936847013154563370ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1474138721U;
long long int var_15 = -2535441422966297634LL;
signed char var_16 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
