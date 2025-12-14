#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1425204446;
unsigned long long int var_4 = 16804998386017772040ULL;
unsigned int var_7 = 2627759465U;
signed char var_8 = (signed char)-114;
short var_10 = (short)10608;
short var_11 = (short)15500;
int var_12 = -667690810;
unsigned int var_13 = 3887457433U;
long long int var_14 = 6720846919635851213LL;
int zero = 0;
int var_19 = -1933325912;
unsigned char var_20 = (unsigned char)169;
unsigned int var_21 = 4209174566U;
signed char var_22 = (signed char)-11;
long long int var_23 = -107517255684370305LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
