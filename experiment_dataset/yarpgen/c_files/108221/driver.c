#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2900867852772929695LL;
unsigned int var_4 = 3920863973U;
long long int var_12 = 3563749135273266236LL;
int zero = 0;
long long int var_20 = 8255605744475201178LL;
signed char var_21 = (signed char)-13;
signed char var_22 = (signed char)-36;
unsigned long long int var_23 = 6621830449611037645ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
