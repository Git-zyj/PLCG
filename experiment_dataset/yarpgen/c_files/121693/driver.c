#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2180308840U;
unsigned int var_2 = 3697632947U;
long long int var_5 = -142276835504916390LL;
long long int var_10 = 4866311723681934647LL;
long long int var_12 = 155467313028968459LL;
long long int var_13 = -2400258134874128193LL;
long long int var_15 = 7690270087080984726LL;
int zero = 0;
long long int var_18 = -898529496047454853LL;
long long int var_19 = 1189106238033189950LL;
unsigned int var_20 = 4122929537U;
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
