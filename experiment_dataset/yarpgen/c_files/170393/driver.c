#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5102;
unsigned char var_5 = (unsigned char)15;
int var_7 = 1151388096;
unsigned char var_8 = (unsigned char)109;
signed char var_9 = (signed char)-123;
unsigned short var_10 = (unsigned short)3455;
int zero = 0;
int var_11 = 20450792;
unsigned long long int var_12 = 7992577156608857439ULL;
signed char var_13 = (signed char)63;
unsigned char var_14 = (unsigned char)192;
unsigned short var_15 = (unsigned short)10334;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
