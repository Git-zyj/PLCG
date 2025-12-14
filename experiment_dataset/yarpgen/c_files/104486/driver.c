#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)117;
unsigned char var_8 = (unsigned char)181;
unsigned char var_11 = (unsigned char)234;
unsigned short var_12 = (unsigned short)42946;
int zero = 0;
signed char var_14 = (signed char)118;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3695446139761795036LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
