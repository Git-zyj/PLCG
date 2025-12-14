#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -527972183;
int var_2 = 339880595;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2180146188U;
short var_8 = (short)-13100;
short var_9 = (short)-4614;
unsigned long long int var_11 = 15708102347197121665ULL;
long long int var_12 = -760143916914560075LL;
unsigned int var_13 = 568892423U;
long long int var_15 = 6040939832250865523LL;
int var_16 = -616602112;
signed char var_17 = (signed char)96;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)107;
long long int var_20 = -9139318279193308944LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-29097;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
