#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1575514495;
signed char var_1 = (signed char)-90;
unsigned char var_3 = (unsigned char)226;
unsigned long long int var_7 = 10183583307288719412ULL;
unsigned long long int var_8 = 8975514637077530240ULL;
unsigned char var_9 = (unsigned char)224;
int zero = 0;
int var_12 = -798624543;
long long int var_13 = 2665443865908724517LL;
unsigned long long int var_14 = 560857541096690713ULL;
short var_15 = (short)-8312;
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
