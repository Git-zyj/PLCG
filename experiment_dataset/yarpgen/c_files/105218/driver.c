#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 904403534U;
unsigned long long int var_4 = 3378795392993073979ULL;
long long int var_5 = -1320601411483422419LL;
unsigned int var_6 = 2614378420U;
short var_9 = (short)19836;
unsigned int var_11 = 2721205289U;
signed char var_12 = (signed char)12;
signed char var_13 = (signed char)15;
signed char var_14 = (signed char)-66;
int zero = 0;
long long int var_15 = -5870178785184366465LL;
unsigned char var_16 = (unsigned char)227;
signed char var_17 = (signed char)33;
long long int var_18 = -6848885038770573222LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
