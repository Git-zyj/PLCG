#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 16326643065301334449ULL;
long long int var_11 = -4721541051822558920LL;
short var_12 = (short)-23627;
int zero = 0;
unsigned int var_16 = 3142044905U;
long long int var_17 = -3223419909147551803LL;
void init() {
}

void checksum() {
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
