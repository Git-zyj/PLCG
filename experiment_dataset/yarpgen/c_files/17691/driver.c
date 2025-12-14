#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)715;
signed char var_6 = (signed char)114;
unsigned long long int var_10 = 2256738615840894583ULL;
unsigned char var_12 = (unsigned char)26;
int zero = 0;
unsigned long long int var_20 = 1430339864795417367ULL;
signed char var_21 = (signed char)-9;
int var_22 = 1546118645;
unsigned int var_23 = 179207455U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
