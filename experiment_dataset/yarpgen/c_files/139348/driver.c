#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-28038;
unsigned short var_7 = (unsigned short)36339;
unsigned long long int var_11 = 10309169192738410203ULL;
unsigned char var_14 = (unsigned char)70;
unsigned int var_18 = 618685190U;
int zero = 0;
unsigned short var_20 = (unsigned short)34682;
signed char var_21 = (signed char)-40;
unsigned short var_22 = (unsigned short)51049;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
