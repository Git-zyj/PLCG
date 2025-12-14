#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2365;
unsigned int var_3 = 3277483250U;
unsigned short var_5 = (unsigned short)60675;
_Bool var_7 = (_Bool)0;
int zero = 0;
int var_11 = 730961740;
signed char var_12 = (signed char)-125;
signed char var_13 = (signed char)39;
unsigned short var_14 = (unsigned short)55433;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
