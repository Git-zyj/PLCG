#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 936960881U;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)72;
signed char var_6 = (signed char)-11;
long long int var_10 = 683504252436129476LL;
int zero = 0;
signed char var_12 = (signed char)-63;
signed char var_13 = (signed char)-11;
int var_14 = 146970049;
unsigned int var_15 = 2459815111U;
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
