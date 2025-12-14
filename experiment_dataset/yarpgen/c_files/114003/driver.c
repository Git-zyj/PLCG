#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)61;
_Bool var_4 = (_Bool)1;
long long int var_5 = -4494611946954471672LL;
short var_8 = (short)-14086;
short var_10 = (short)18448;
short var_13 = (short)12062;
unsigned long long int var_14 = 18349698776188799038ULL;
int zero = 0;
int var_20 = 1120054314;
int var_21 = 2020141112;
long long int var_22 = 148516966314360601LL;
short var_23 = (short)-5431;
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
