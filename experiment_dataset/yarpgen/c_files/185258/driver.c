#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11824785398037344413ULL;
short var_6 = (short)19268;
short var_12 = (short)28394;
unsigned long long int var_14 = 15017224197818996228ULL;
int zero = 0;
signed char var_19 = (signed char)68;
long long int var_20 = 5691240667780771346LL;
unsigned long long int var_21 = 14275875882293336737ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
