#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)5;
unsigned long long int var_6 = 15807374820825098085ULL;
unsigned long long int var_7 = 10173628828205299614ULL;
int zero = 0;
signed char var_12 = (signed char)-67;
unsigned long long int var_13 = 1469099902777733825ULL;
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
