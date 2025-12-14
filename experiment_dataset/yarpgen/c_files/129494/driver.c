#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-83;
unsigned short var_5 = (unsigned short)8469;
unsigned char var_11 = (unsigned char)240;
int zero = 0;
signed char var_12 = (signed char)-55;
long long int var_13 = -8523329196758594762LL;
unsigned char var_14 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
