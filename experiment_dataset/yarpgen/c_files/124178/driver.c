#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1539099313;
signed char var_1 = (signed char)-60;
unsigned char var_3 = (unsigned char)162;
unsigned char var_4 = (unsigned char)87;
int zero = 0;
unsigned char var_12 = (unsigned char)153;
short var_13 = (short)-14874;
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
