#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)28;
short var_2 = (short)11430;
int var_10 = -1189697190;
_Bool var_15 = (_Bool)1;
signed char var_17 = (signed char)-93;
int zero = 0;
long long int var_18 = -7014144578564948520LL;
unsigned long long int var_19 = 9540015917716386061ULL;
short var_20 = (short)-15852;
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
