#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
short var_4 = (short)3806;
unsigned long long int var_10 = 12695116692533388641ULL;
int var_13 = 1751595930;
int var_18 = 1881494956;
int zero = 0;
int var_19 = -1681765252;
signed char var_20 = (signed char)-11;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)77;
unsigned short var_23 = (unsigned short)46064;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
