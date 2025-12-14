#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
unsigned long long int var_5 = 13912205379026228369ULL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-1;
int var_11 = 667450873;
int zero = 0;
signed char var_14 = (signed char)-90;
unsigned int var_15 = 2001242652U;
int var_16 = -1045593365;
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
