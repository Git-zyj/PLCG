#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
int var_3 = 185754700;
unsigned long long int var_6 = 5924288696691044775ULL;
unsigned long long int var_7 = 14250117241529592120ULL;
unsigned char var_9 = (unsigned char)87;
unsigned short var_11 = (unsigned short)54959;
int zero = 0;
long long int var_13 = -776796743605492953LL;
signed char var_14 = (signed char)-95;
unsigned char var_15 = (unsigned char)81;
signed char var_16 = (signed char)90;
void init() {
}

void checksum() {
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
