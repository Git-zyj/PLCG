#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1457370530;
long long int var_6 = 7702139649691626778LL;
unsigned char var_9 = (unsigned char)120;
int zero = 0;
long long int var_10 = 406866094711132722LL;
int var_11 = 1978513157;
unsigned long long int var_12 = 16122700975539325425ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
