#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-123;
int var_13 = -2000437046;
unsigned short var_15 = (unsigned short)61394;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)17031;
unsigned long long int var_20 = 18099048451693574402ULL;
long long int var_21 = 4494048606614101841LL;
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
