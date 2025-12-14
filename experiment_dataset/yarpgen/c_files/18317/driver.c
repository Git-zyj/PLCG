#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3203887181U;
short var_3 = (short)19030;
int var_6 = 9490200;
short var_7 = (short)18642;
unsigned long long int var_8 = 15366174343906677880ULL;
long long int var_9 = 5381507888245250536LL;
long long int var_10 = -1446569318480634018LL;
short var_11 = (short)-8700;
unsigned int var_12 = 1315045886U;
int zero = 0;
unsigned long long int var_13 = 3087700778284586651ULL;
unsigned int var_14 = 23488213U;
signed char var_15 = (signed char)107;
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
