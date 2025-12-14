#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)93;
unsigned int var_11 = 1237887349U;
signed char var_18 = (signed char)19;
int zero = 0;
unsigned long long int var_20 = 356903719874507699ULL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-61;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
