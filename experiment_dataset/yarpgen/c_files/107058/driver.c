#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1993589098U;
short var_13 = (short)8366;
long long int var_15 = 1513005794112471486LL;
int zero = 0;
short var_17 = (short)28987;
long long int var_18 = -6671293654897822880LL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)168;
signed char var_21 = (signed char)-38;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1885297074U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
