#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24462;
signed char var_3 = (signed char)-48;
int var_4 = -1948193472;
long long int var_5 = 624629521741939265LL;
int var_6 = -1030925025;
long long int var_8 = -23529877880649932LL;
int zero = 0;
short var_11 = (short)5104;
long long int var_12 = 2087520562138747661LL;
long long int var_13 = 3062374956416649167LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
