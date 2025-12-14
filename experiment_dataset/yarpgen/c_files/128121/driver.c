#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9686271471233221529ULL;
unsigned char var_1 = (unsigned char)102;
unsigned int var_3 = 2031070007U;
short var_7 = (short)21266;
unsigned int var_8 = 3923179781U;
unsigned long long int var_13 = 6122669253958056259ULL;
int zero = 0;
long long int var_18 = 1179231324306512454LL;
short var_19 = (short)31763;
long long int var_20 = -6794644598045619916LL;
signed char var_21 = (signed char)-66;
signed char var_22 = (signed char)47;
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
