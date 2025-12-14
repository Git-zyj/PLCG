#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
unsigned short var_4 = (unsigned short)8863;
unsigned int var_6 = 2619611488U;
int zero = 0;
signed char var_11 = (signed char)37;
signed char var_12 = (signed char)-83;
long long int var_13 = -8455159108796821424LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
