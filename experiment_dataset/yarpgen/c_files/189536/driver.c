#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 4475146777635121837ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = 3203988201876708944LL;
unsigned int var_19 = 3502880849U;
unsigned int var_20 = 2409904656U;
short var_21 = (short)-15182;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
