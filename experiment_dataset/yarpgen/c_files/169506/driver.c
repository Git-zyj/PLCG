#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3388770178U;
int var_4 = -2134512934;
int var_5 = -342745362;
int zero = 0;
int var_11 = -805369643;
unsigned short var_12 = (unsigned short)9871;
unsigned short var_13 = (unsigned short)51670;
unsigned short var_14 = (unsigned short)5505;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
