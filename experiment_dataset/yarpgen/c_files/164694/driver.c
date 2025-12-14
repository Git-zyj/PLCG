#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25071;
signed char var_8 = (signed char)93;
int var_12 = 354455938;
int zero = 0;
int var_15 = -1722124089;
int var_16 = -1350422048;
unsigned long long int var_17 = 1863969035218156239ULL;
signed char var_18 = (signed char)-73;
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
