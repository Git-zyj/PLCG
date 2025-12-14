#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-22;
signed char var_4 = (signed char)-124;
unsigned char var_7 = (unsigned char)235;
unsigned char var_10 = (unsigned char)89;
int zero = 0;
unsigned int var_11 = 844726996U;
unsigned int var_12 = 3385038072U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
