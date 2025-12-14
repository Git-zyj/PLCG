#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1121264175;
long long int var_1 = -4795163936734391604LL;
unsigned long long int var_2 = 13443616794413842905ULL;
int var_4 = 764377364;
signed char var_5 = (signed char)52;
int zero = 0;
long long int var_11 = -5506208168764300400LL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)1457;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
