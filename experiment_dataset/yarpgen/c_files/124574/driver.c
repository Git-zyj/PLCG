#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)57;
unsigned short var_7 = (unsigned short)30851;
short var_8 = (short)20866;
int var_11 = 1325237241;
unsigned short var_12 = (unsigned short)21524;
int var_13 = -380236284;
unsigned long long int var_14 = 11301453389691908498ULL;
int zero = 0;
signed char var_15 = (signed char)-88;
int var_16 = -1235253528;
int var_17 = 1713966611;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
