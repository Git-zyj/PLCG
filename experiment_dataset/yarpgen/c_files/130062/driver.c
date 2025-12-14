#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1838351241U;
short var_1 = (short)17863;
int var_2 = -1904587251;
unsigned short var_4 = (unsigned short)44316;
int var_10 = -893994100;
unsigned int var_11 = 3331864000U;
long long int var_15 = 693666009963638095LL;
int zero = 0;
unsigned char var_18 = (unsigned char)202;
unsigned short var_19 = (unsigned short)25447;
signed char var_20 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
