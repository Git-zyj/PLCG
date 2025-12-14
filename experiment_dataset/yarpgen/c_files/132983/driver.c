#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19069;
int var_3 = 654054909;
short var_6 = (short)-28252;
int var_7 = 1666700803;
short var_9 = (short)2196;
int var_10 = 396561473;
int zero = 0;
unsigned short var_11 = (unsigned short)44583;
signed char var_12 = (signed char)1;
unsigned char var_13 = (unsigned char)245;
unsigned short var_14 = (unsigned short)41584;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
