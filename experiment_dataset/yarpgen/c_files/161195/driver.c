#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4023277026148359831LL;
unsigned int var_15 = 4171342255U;
int var_16 = -409755050;
int zero = 0;
unsigned long long int var_18 = 16330900710341452986ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3918831289U;
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
