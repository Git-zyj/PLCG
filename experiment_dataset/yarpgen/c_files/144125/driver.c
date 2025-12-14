#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 664074917;
signed char var_6 = (signed char)-6;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 4140132921U;
int zero = 0;
signed char var_12 = (signed char)61;
unsigned char var_13 = (unsigned char)225;
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
