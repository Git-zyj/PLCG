#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22054;
unsigned long long int var_5 = 14644362678032597402ULL;
signed char var_13 = (signed char)25;
int zero = 0;
unsigned long long int var_19 = 16714132517097692313ULL;
signed char var_20 = (signed char)-81;
unsigned int var_21 = 2167549418U;
unsigned char var_22 = (unsigned char)24;
void init() {
}

void checksum() {
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
