#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
signed char var_1 = (signed char)60;
_Bool var_2 = (_Bool)1;
unsigned int var_8 = 3021087465U;
unsigned long long int var_14 = 395443921442826804ULL;
signed char var_15 = (signed char)17;
unsigned int var_17 = 1852900545U;
int zero = 0;
signed char var_18 = (signed char)-11;
signed char var_19 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
