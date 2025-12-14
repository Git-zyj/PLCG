#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)67;
long long int var_6 = 770649772159240444LL;
signed char var_7 = (signed char)90;
int zero = 0;
unsigned long long int var_10 = 12053922410864397308ULL;
signed char var_11 = (signed char)-127;
signed char var_12 = (signed char)42;
signed char var_13 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
