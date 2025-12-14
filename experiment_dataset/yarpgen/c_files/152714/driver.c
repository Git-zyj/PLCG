#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7914759585713923434LL;
long long int var_8 = 7731713200021477921LL;
unsigned long long int var_9 = 14173953711290868784ULL;
long long int var_10 = 8486405041165855874LL;
signed char var_11 = (signed char)111;
unsigned int var_12 = 3226555523U;
int zero = 0;
unsigned int var_13 = 3922879681U;
signed char var_14 = (signed char)-36;
unsigned int var_15 = 2394582201U;
_Bool var_16 = (_Bool)0;
short var_17 = (short)16345;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
