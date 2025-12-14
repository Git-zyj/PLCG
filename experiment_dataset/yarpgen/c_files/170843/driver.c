#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
short var_2 = (short)7036;
unsigned char var_3 = (unsigned char)255;
signed char var_4 = (signed char)-34;
long long int var_5 = 97098328672435656LL;
int var_6 = 1159524246;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 6540667793498991862ULL;
signed char var_10 = (signed char)66;
unsigned int var_11 = 611898431U;
int zero = 0;
signed char var_12 = (signed char)71;
short var_13 = (short)15837;
unsigned long long int var_14 = 7848241148930860502ULL;
void init() {
}

void checksum() {
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
