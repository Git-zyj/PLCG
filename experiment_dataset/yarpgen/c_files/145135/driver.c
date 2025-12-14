#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -228879393718549053LL;
signed char var_1 = (signed char)-108;
unsigned int var_2 = 115667874U;
signed char var_5 = (signed char)-22;
signed char var_6 = (signed char)11;
long long int var_7 = -7823108138570216254LL;
unsigned int var_8 = 898940472U;
signed char var_10 = (signed char)-76;
signed char var_11 = (signed char)110;
unsigned int var_12 = 1067811507U;
int zero = 0;
unsigned int var_13 = 33040908U;
signed char var_14 = (signed char)4;
long long int var_15 = 1472180274632200421LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
