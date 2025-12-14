#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2846172194123040035LL;
signed char var_10 = (signed char)-3;
long long int var_13 = -1665949649542215172LL;
short var_14 = (short)-30299;
signed char var_17 = (signed char)-71;
int zero = 0;
int var_18 = 586123535;
signed char var_19 = (signed char)31;
signed char var_20 = (signed char)-11;
unsigned long long int var_21 = 2274873884792962226ULL;
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
