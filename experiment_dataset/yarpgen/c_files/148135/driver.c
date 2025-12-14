#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6919391328766828849LL;
int var_5 = -1235580828;
unsigned int var_8 = 3944793188U;
unsigned int var_11 = 1774290552U;
unsigned int var_13 = 3525434151U;
long long int var_14 = -3120413407735800296LL;
int var_15 = -240067089;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3501523140U;
long long int var_19 = 2982817118757803168LL;
signed char var_20 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
