#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 858046140;
int var_3 = -1379711110;
signed char var_4 = (signed char)-56;
unsigned char var_5 = (unsigned char)117;
signed char var_18 = (signed char)-18;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -6156331490892897504LL;
int var_21 = -1953400747;
void init() {
}

void checksum() {
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
