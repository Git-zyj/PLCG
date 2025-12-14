#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -4101804748787040607LL;
long long int var_17 = 7651380217228754266LL;
int zero = 0;
short var_18 = (short)8200;
long long int var_19 = -1245156574083325451LL;
unsigned int var_20 = 2998922788U;
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
