#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-115;
short var_5 = (short)29386;
int var_9 = -1004426912;
long long int var_11 = 4192692510355234602LL;
short var_14 = (short)-32311;
int zero = 0;
short var_15 = (short)19662;
long long int var_16 = 159130282266877931LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
