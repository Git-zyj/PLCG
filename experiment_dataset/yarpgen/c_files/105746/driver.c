#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8742780909443079375ULL;
signed char var_5 = (signed char)-15;
long long int var_8 = 1133109032823950716LL;
unsigned int var_12 = 2600701772U;
unsigned int var_14 = 1556646781U;
signed char var_16 = (signed char)72;
long long int var_18 = 1813942114199025465LL;
int zero = 0;
short var_20 = (short)-30950;
unsigned char var_21 = (unsigned char)195;
void init() {
}

void checksum() {
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
