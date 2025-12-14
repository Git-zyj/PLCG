#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
int var_2 = 58214430;
signed char var_3 = (signed char)-92;
unsigned char var_4 = (unsigned char)190;
int zero = 0;
unsigned long long int var_14 = 4336107439549866769ULL;
short var_15 = (short)21203;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
