#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
signed char var_1 = (signed char)5;
unsigned long long int var_2 = 2387637909426837983ULL;
unsigned short var_5 = (unsigned short)41910;
unsigned int var_10 = 3345481383U;
int zero = 0;
unsigned char var_12 = (unsigned char)43;
_Bool var_13 = (_Bool)1;
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
