#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-13;
int zero = 0;
unsigned int var_18 = 254040993U;
unsigned long long int var_19 = 1109347937098134947ULL;
signed char var_20 = (signed char)49;
int var_21 = 1671601260;
unsigned short var_22 = (unsigned short)62850;
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
