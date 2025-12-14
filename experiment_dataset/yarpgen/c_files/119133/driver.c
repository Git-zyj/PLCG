#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3285611458U;
unsigned long long int var_1 = 8124786754015754066ULL;
unsigned char var_2 = (unsigned char)23;
unsigned long long int var_4 = 1933645843997715586ULL;
int var_5 = -1463932224;
unsigned char var_6 = (unsigned char)114;
signed char var_7 = (signed char)99;
int zero = 0;
unsigned char var_10 = (unsigned char)174;
unsigned char var_11 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
