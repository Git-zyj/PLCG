#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-89;
long long int var_3 = -2732207905424993578LL;
short var_4 = (short)15598;
_Bool var_8 = (_Bool)1;
long long int var_9 = 7474256978121867318LL;
int zero = 0;
int var_12 = 1910472405;
long long int var_13 = 3774518966667038855LL;
int var_14 = -1794538497;
long long int var_15 = -1962156269327241669LL;
unsigned char var_16 = (unsigned char)179;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
