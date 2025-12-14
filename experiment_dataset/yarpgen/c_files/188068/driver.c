#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)4;
short var_4 = (short)20129;
signed char var_5 = (signed char)38;
unsigned long long int var_6 = 1919239429765443237ULL;
signed char var_8 = (signed char)38;
unsigned int var_10 = 1504495550U;
int zero = 0;
unsigned long long int var_13 = 10010898162374244622ULL;
unsigned long long int var_14 = 11696260514936661154ULL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)8119;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
