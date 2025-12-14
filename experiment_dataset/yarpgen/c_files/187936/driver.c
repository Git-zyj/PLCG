#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12526291799340328120ULL;
unsigned int var_1 = 3986538965U;
unsigned long long int var_2 = 531384264642264039ULL;
unsigned short var_3 = (unsigned short)55998;
unsigned short var_5 = (unsigned short)45074;
unsigned short var_8 = (unsigned short)40020;
unsigned long long int var_10 = 18310000268342845198ULL;
unsigned short var_12 = (unsigned short)8738;
int zero = 0;
unsigned short var_15 = (unsigned short)36960;
unsigned long long int var_16 = 7420440849651418835ULL;
unsigned int var_17 = 1949240894U;
unsigned short var_18 = (unsigned short)24743;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
