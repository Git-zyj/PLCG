#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)47791;
short var_6 = (short)-27785;
signed char var_7 = (signed char)-54;
unsigned short var_10 = (unsigned short)21747;
int zero = 0;
unsigned short var_12 = (unsigned short)19665;
unsigned short var_13 = (unsigned short)3622;
short var_14 = (short)22289;
unsigned int var_15 = 3704778544U;
unsigned short var_16 = (unsigned short)25879;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
