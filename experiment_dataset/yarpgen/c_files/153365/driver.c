#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
long long int var_8 = 4727541105221196303LL;
unsigned long long int var_13 = 9369872520793919537ULL;
int var_16 = 1447840346;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_19 = -5398003743315834668LL;
signed char var_20 = (signed char)-48;
signed char var_21 = (signed char)-25;
int var_22 = -2060369923;
void init() {
}

void checksum() {
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
