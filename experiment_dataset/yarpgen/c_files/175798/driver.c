#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13081520283738670497ULL;
unsigned long long int var_6 = 6931187792303783441ULL;
unsigned long long int var_7 = 7413706202235166693ULL;
unsigned char var_11 = (unsigned char)223;
signed char var_13 = (signed char)-2;
int zero = 0;
unsigned long long int var_17 = 515718036057581035ULL;
unsigned char var_18 = (unsigned char)92;
unsigned long long int var_19 = 7100718593673719459ULL;
unsigned long long int var_20 = 9605830667609424704ULL;
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
