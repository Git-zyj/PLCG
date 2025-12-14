#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)74;
unsigned int var_7 = 2344799621U;
unsigned int var_8 = 1491114710U;
unsigned short var_10 = (unsigned short)57896;
int var_15 = -601137028;
int zero = 0;
long long int var_16 = -1186304054967139493LL;
unsigned long long int var_17 = 14082560132359982456ULL;
signed char var_18 = (signed char)126;
long long int var_19 = -7353628978947070939LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
