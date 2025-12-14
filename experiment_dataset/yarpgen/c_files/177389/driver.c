#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)156;
short var_2 = (short)-27029;
signed char var_3 = (signed char)-54;
unsigned long long int var_4 = 14112261283273201652ULL;
unsigned short var_7 = (unsigned short)54385;
unsigned short var_8 = (unsigned short)55743;
signed char var_10 = (signed char)-55;
signed char var_13 = (signed char)65;
int zero = 0;
signed char var_16 = (signed char)85;
short var_17 = (short)-30516;
unsigned long long int var_18 = 11163828219266973143ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
