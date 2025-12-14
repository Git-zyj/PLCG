#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11636133712288413494ULL;
_Bool var_7 = (_Bool)0;
int var_11 = -1803020321;
int var_13 = 965311241;
unsigned long long int var_14 = 1880841033847592786ULL;
int zero = 0;
unsigned long long int var_17 = 15388720805979617111ULL;
long long int var_18 = -481828945146521791LL;
void init() {
}

void checksum() {
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
