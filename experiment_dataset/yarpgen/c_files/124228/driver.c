#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8554050791301300068ULL;
long long int var_1 = 7186559454645655498LL;
long long int var_10 = 1068737081989812641LL;
signed char var_11 = (signed char)17;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 535697135U;
signed char var_20 = (signed char)-40;
unsigned int var_21 = 1831834868U;
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
