#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7302846724003992174LL;
long long int var_2 = 1719777232663439853LL;
unsigned short var_4 = (unsigned short)21807;
signed char var_8 = (signed char)71;
int var_11 = -1279445962;
long long int var_14 = -6061960560302583616LL;
int zero = 0;
unsigned long long int var_15 = 16622901343759972771ULL;
signed char var_16 = (signed char)8;
unsigned short var_17 = (unsigned short)25738;
unsigned long long int var_18 = 8573832872318681372ULL;
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
