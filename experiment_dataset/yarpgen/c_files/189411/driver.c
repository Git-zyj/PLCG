#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 69197876;
short var_3 = (short)-22129;
long long int var_19 = 570367894651437789LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)11816;
signed char var_22 = (signed char)-35;
void init() {
}

void checksum() {
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
