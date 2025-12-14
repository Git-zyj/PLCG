#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-78;
signed char var_10 = (signed char)120;
unsigned long long int var_11 = 18387589178390869229ULL;
signed char var_17 = (signed char)64;
int zero = 0;
unsigned long long int var_18 = 12647138813275931919ULL;
unsigned char var_19 = (unsigned char)36;
signed char var_20 = (signed char)42;
long long int var_21 = -7878349146113645173LL;
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
