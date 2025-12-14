#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-24;
unsigned int var_6 = 825558598U;
int var_10 = -660467144;
unsigned int var_11 = 1333654459U;
int zero = 0;
unsigned short var_12 = (unsigned short)44748;
unsigned long long int var_13 = 1595924765812030033ULL;
long long int var_14 = 4563497864743542076LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
