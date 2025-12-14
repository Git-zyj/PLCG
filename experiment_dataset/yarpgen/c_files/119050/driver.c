#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)164;
unsigned char var_3 = (unsigned char)251;
short var_5 = (short)25243;
long long int var_6 = -5529333635338157942LL;
unsigned int var_7 = 216199604U;
unsigned int var_8 = 1981324337U;
long long int var_10 = 8675576752470147940LL;
int zero = 0;
int var_12 = -687308744;
int var_13 = -1496499451;
signed char var_14 = (signed char)11;
void init() {
}

void checksum() {
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
