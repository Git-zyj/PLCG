#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4006;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_20 = 4827533741349019983LL;
signed char var_21 = (signed char)-6;
long long int var_22 = 1435990165151641660LL;
unsigned int var_23 = 3753675253U;
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
