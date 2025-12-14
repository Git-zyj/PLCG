#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
signed char var_4 = (signed char)-94;
int var_5 = 534727388;
long long int var_8 = 1005815562778411427LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)25860;
int var_13 = -1515303147;
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
