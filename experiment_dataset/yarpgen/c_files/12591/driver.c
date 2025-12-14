#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8319601612334011212LL;
int var_1 = 1032718286;
long long int var_2 = 6367737710410671103LL;
int var_3 = -1936397107;
short var_4 = (short)350;
int zero = 0;
long long int var_13 = -8795798564728223297LL;
signed char var_14 = (signed char)-38;
void init() {
}

void checksum() {
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
