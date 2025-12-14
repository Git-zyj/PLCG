#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25294;
int var_4 = -1777455046;
signed char var_7 = (signed char)-32;
unsigned long long int var_8 = 6015496415533675664ULL;
unsigned short var_11 = (unsigned short)45601;
unsigned long long int var_12 = 6019548655884276009ULL;
int zero = 0;
short var_13 = (short)14432;
long long int var_14 = 1983707306128821906LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
