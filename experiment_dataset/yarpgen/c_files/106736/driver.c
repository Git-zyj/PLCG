#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1246610386706561692LL;
int var_5 = -918120760;
long long int var_7 = -5332964481828059546LL;
int var_8 = -1697614454;
long long int var_12 = 5113719456675065786LL;
int zero = 0;
long long int var_19 = -2040198177723355782LL;
int var_20 = 941599432;
long long int var_21 = -4971700143559608691LL;
int var_22 = 1525507646;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
