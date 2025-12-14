#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1772754524;
long long int var_7 = -6646504300740672994LL;
unsigned long long int var_8 = 18156593137613452649ULL;
signed char var_10 = (signed char)117;
int zero = 0;
unsigned char var_13 = (unsigned char)93;
unsigned long long int var_14 = 14888088076986954888ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
