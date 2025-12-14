#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6820230116635126525ULL;
long long int var_5 = 2968392100826593229LL;
int var_7 = 995392557;
int var_17 = 536016284;
int zero = 0;
long long int var_19 = 1979447129580976059LL;
long long int var_20 = -2014310644922963311LL;
long long int var_21 = 1355708161908332680LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
