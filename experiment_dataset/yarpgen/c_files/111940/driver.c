#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
signed char var_1 = (signed char)-63;
signed char var_3 = (signed char)-36;
signed char var_5 = (signed char)-107;
unsigned char var_7 = (unsigned char)109;
int zero = 0;
unsigned char var_11 = (unsigned char)108;
unsigned short var_12 = (unsigned short)45766;
unsigned short var_13 = (unsigned short)37143;
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
