#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13150316464227924941ULL;
unsigned long long int var_3 = 8365278937020782032ULL;
_Bool var_4 = (_Bool)1;
short var_8 = (short)-9201;
long long int var_11 = -8016056218797305925LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 589352499326192733ULL;
short var_15 = (short)13071;
unsigned short var_16 = (unsigned short)39082;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
