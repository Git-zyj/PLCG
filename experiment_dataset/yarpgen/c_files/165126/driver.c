#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)39;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)21353;
unsigned long long int var_13 = 9439867918501796125ULL;
signed char var_14 = (signed char)12;
int zero = 0;
signed char var_15 = (signed char)-30;
int var_16 = 598001888;
signed char var_17 = (signed char)-125;
void init() {
}

void checksum() {
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
