#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-97;
unsigned char var_2 = (unsigned char)121;
short var_5 = (short)-16226;
unsigned int var_6 = 4023703433U;
signed char var_8 = (signed char)-97;
int var_10 = 706908208;
int var_11 = -585440569;
int zero = 0;
long long int var_12 = 9136669123846181261LL;
short var_13 = (short)9332;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
