#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53978;
int var_1 = -733862990;
unsigned long long int var_3 = 3934172367043946286ULL;
unsigned long long int var_5 = 17943685915933109547ULL;
unsigned long long int var_7 = 16874776651926286015ULL;
unsigned long long int var_9 = 5272983945064005429ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 5366879550465641021ULL;
unsigned short var_12 = (unsigned short)42174;
_Bool var_13 = (_Bool)0;
int var_14 = 162791131;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
