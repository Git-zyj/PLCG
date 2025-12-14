#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2826174012897848822ULL;
unsigned char var_11 = (unsigned char)120;
short var_14 = (short)11310;
unsigned long long int var_18 = 16252673630181364683ULL;
int zero = 0;
unsigned long long int var_20 = 12707191661166605563ULL;
unsigned long long int var_21 = 8860051373200895867ULL;
unsigned short var_22 = (unsigned short)28045;
void init() {
}

void checksum() {
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
