#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1849785990U;
signed char var_5 = (signed char)-2;
signed char var_10 = (signed char)-90;
unsigned int var_12 = 4018501901U;
int zero = 0;
int var_20 = 765872444;
long long int var_21 = 2941769845536736425LL;
short var_22 = (short)29144;
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
