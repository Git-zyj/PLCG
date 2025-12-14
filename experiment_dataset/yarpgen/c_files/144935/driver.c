#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 464622717U;
long long int var_1 = -5918609013094551323LL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1535834184U;
long long int var_9 = -8202975101592926730LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)55;
long long int var_13 = 3129124556368882193LL;
unsigned short var_14 = (unsigned short)20636;
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
