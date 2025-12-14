#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
unsigned long long int var_2 = 1251899197886144182ULL;
long long int var_4 = -8471118721806383878LL;
short var_9 = (short)18046;
short var_14 = (short)29916;
int zero = 0;
unsigned char var_16 = (unsigned char)223;
signed char var_17 = (signed char)32;
unsigned long long int var_18 = 11124853102819835741ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
