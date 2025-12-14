#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
unsigned int var_1 = 2729466841U;
unsigned int var_2 = 334856449U;
unsigned int var_6 = 1047482372U;
unsigned int var_7 = 2384773633U;
signed char var_11 = (signed char)2;
int var_13 = 544043953;
int var_14 = 817815895;
int zero = 0;
unsigned int var_18 = 2704554998U;
int var_19 = 762665902;
unsigned int var_20 = 3725726387U;
short var_21 = (short)-26713;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
