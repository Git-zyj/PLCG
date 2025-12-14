#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_7 = 876406577;
signed char var_10 = (signed char)-25;
int var_11 = -1962717913;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-11307;
int var_15 = -1112779127;
long long int var_16 = -3346132068101438047LL;
short var_17 = (short)15407;
int zero = 0;
int var_18 = 2069646127;
long long int var_19 = -6410106859421619434LL;
unsigned short var_20 = (unsigned short)3173;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
