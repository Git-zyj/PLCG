#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1551816846;
long long int var_3 = -5459720699126704969LL;
signed char var_5 = (signed char)75;
unsigned char var_7 = (unsigned char)235;
short var_11 = (short)-1117;
int var_13 = 1575081789;
signed char var_14 = (signed char)67;
unsigned int var_18 = 2758856068U;
int zero = 0;
unsigned long long int var_19 = 3801186969041832741ULL;
long long int var_20 = -6789983406693305452LL;
unsigned int var_21 = 487723420U;
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
