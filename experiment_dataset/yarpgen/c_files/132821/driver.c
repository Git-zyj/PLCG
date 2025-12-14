#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)4;
int var_3 = 226396446;
unsigned char var_5 = (unsigned char)130;
signed char var_7 = (signed char)-47;
_Bool var_8 = (_Bool)1;
int var_9 = -176168430;
int zero = 0;
long long int var_10 = -6101340925242914274LL;
int var_11 = -2144191683;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
