#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32116;
unsigned char var_2 = (unsigned char)81;
short var_6 = (short)9383;
short var_13 = (short)6476;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 4649701985982203102ULL;
unsigned long long int var_19 = 4689981893497730187ULL;
short var_20 = (short)14760;
int var_21 = -1445873373;
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
