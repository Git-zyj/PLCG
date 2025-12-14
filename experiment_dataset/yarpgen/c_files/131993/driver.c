#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 208924243U;
unsigned int var_4 = 3512853472U;
unsigned int var_6 = 363554927U;
unsigned int var_7 = 2505475709U;
unsigned int var_11 = 1311113582U;
unsigned int var_13 = 2522457510U;
int zero = 0;
unsigned int var_20 = 951593922U;
unsigned int var_21 = 2688088831U;
unsigned int var_22 = 903733123U;
unsigned int var_23 = 4071320870U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
