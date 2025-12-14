#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3312932537990121017LL;
unsigned short var_2 = (unsigned short)3436;
int zero = 0;
signed char var_20 = (signed char)104;
unsigned int var_21 = 1089434584U;
signed char var_22 = (signed char)-24;
int var_23 = 1111491125;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
