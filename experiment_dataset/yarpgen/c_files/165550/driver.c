#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-94;
unsigned short var_4 = (unsigned short)43063;
long long int var_6 = 1186378787292144970LL;
_Bool var_7 = (_Bool)0;
int var_8 = 233897274;
int var_11 = 1520828393;
int zero = 0;
short var_12 = (short)8333;
signed char var_13 = (signed char)78;
unsigned long long int var_14 = 4309493051487262321ULL;
unsigned short var_15 = (unsigned short)40773;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
