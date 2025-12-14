#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)109;
unsigned char var_3 = (unsigned char)168;
unsigned short var_5 = (unsigned short)44587;
short var_7 = (short)16257;
unsigned int var_8 = 421766095U;
short var_9 = (short)15031;
unsigned short var_10 = (unsigned short)40375;
unsigned int var_11 = 4084991375U;
int zero = 0;
short var_12 = (short)28303;
unsigned char var_13 = (unsigned char)8;
unsigned int var_14 = 632735009U;
short var_15 = (short)-22573;
void init() {
}

void checksum() {
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
