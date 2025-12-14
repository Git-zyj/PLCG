#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)0;
int var_12 = 1409256766;
long long int var_14 = -7312929213368771961LL;
long long int var_15 = 2045978714114646429LL;
int zero = 0;
unsigned long long int var_18 = 1885938588180520727ULL;
long long int var_19 = 3921440943877119722LL;
void init() {
}

void checksum() {
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
