#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4038225624U;
unsigned int var_8 = 338317141U;
unsigned int var_11 = 2288047102U;
int zero = 0;
long long int var_20 = 5710390117435787129LL;
long long int var_21 = 9092085092358510802LL;
void init() {
}

void checksum() {
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
