#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 84668988;
int var_2 = -1065519733;
int var_3 = -1814293792;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 2940980339U;
short var_8 = (short)30618;
int var_11 = 807639725;
int zero = 0;
int var_15 = -1683168928;
short var_16 = (short)-30565;
short var_17 = (short)-10791;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
