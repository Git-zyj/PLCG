#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 694751177374943237LL;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-70;
int var_7 = 1843911207;
int var_8 = -220821134;
signed char var_9 = (signed char)116;
unsigned int var_11 = 163462376U;
int zero = 0;
long long int var_14 = 507022679060774264LL;
long long int var_15 = 5992751716459041966LL;
long long int var_16 = -7245302643096543420LL;
void init() {
}

void checksum() {
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
