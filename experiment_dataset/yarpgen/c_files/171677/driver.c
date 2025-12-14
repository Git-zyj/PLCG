#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
short var_1 = (short)-19280;
short var_2 = (short)15017;
unsigned char var_3 = (unsigned char)28;
int var_4 = -96281330;
unsigned short var_5 = (unsigned short)27963;
unsigned char var_6 = (unsigned char)12;
long long int var_7 = 7803045677879757307LL;
int var_9 = -103372103;
int zero = 0;
unsigned char var_10 = (unsigned char)190;
unsigned int var_11 = 2273141677U;
unsigned int var_12 = 107942728U;
unsigned char var_13 = (unsigned char)243;
signed char var_14 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
