#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
long long int var_3 = -1766677867809079839LL;
long long int var_4 = -5635062604624524279LL;
_Bool var_7 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1633506646U;
signed char var_20 = (signed char)45;
unsigned int var_21 = 2218605516U;
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
