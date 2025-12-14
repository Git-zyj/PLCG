#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6633;
_Bool var_2 = (_Bool)1;
long long int var_4 = -1614056505981591338LL;
signed char var_7 = (signed char)-10;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 9933968332078318533ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 273346603380552765ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
