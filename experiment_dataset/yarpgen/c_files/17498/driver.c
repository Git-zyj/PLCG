#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18017389323120435442ULL;
unsigned int var_2 = 1938285059U;
signed char var_3 = (signed char)77;
unsigned char var_5 = (unsigned char)164;
_Bool var_13 = (_Bool)1;
long long int var_14 = 780086280633522131LL;
unsigned char var_15 = (unsigned char)103;
unsigned char var_17 = (unsigned char)216;
short var_18 = (short)20271;
int zero = 0;
unsigned char var_19 = (unsigned char)83;
long long int var_20 = 4871800531069041761LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
