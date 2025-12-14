#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15279994360854448808ULL;
int var_2 = -2082716839;
_Bool var_3 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-29;
int zero = 0;
long long int var_14 = 6362365157444739577LL;
int var_15 = -1725369632;
unsigned int var_16 = 1950232596U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
