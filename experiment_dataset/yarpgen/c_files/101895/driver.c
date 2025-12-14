#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)207;
unsigned long long int var_2 = 15209173896268091296ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 10798959466928470732ULL;
unsigned long long int var_9 = 12928196370981054343ULL;
int zero = 0;
signed char var_12 = (signed char)8;
unsigned long long int var_13 = 13351692951806786512ULL;
void init() {
}

void checksum() {
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
