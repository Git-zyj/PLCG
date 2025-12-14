#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2593560616U;
signed char var_3 = (signed char)4;
unsigned int var_4 = 1937392220U;
long long int var_6 = 2546278147143862011LL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3409156824U;
long long int var_10 = 8657424046691140640LL;
int zero = 0;
long long int var_11 = 3006213268530254864LL;
signed char var_12 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
