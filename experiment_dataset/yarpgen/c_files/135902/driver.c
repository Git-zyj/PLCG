#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 456957837;
signed char var_4 = (signed char)66;
unsigned char var_6 = (unsigned char)131;
unsigned char var_7 = (unsigned char)144;
int var_8 = 28832735;
unsigned int var_11 = 4189876140U;
int zero = 0;
long long int var_13 = -6653292018388450278LL;
unsigned char var_14 = (unsigned char)38;
void init() {
}

void checksum() {
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
