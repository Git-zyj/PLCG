#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1536046844;
short var_2 = (short)-13692;
unsigned long long int var_4 = 3577826333563653259ULL;
int var_10 = -2058735726;
signed char var_17 = (signed char)87;
int zero = 0;
signed char var_18 = (signed char)54;
int var_19 = 734099916;
short var_20 = (short)11385;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
