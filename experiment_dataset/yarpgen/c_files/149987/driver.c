#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2891861380U;
unsigned long long int var_1 = 10745242789472434338ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 5887355475412622796LL;
long long int var_8 = 4499594276296029689LL;
long long int var_11 = 7981923065629401795LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2362996920U;
int zero = 0;
long long int var_18 = 1107292808333121481LL;
int var_19 = 689100184;
unsigned char var_20 = (unsigned char)150;
int var_21 = -528063763;
int var_22 = 776386101;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
