#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1041808850U;
int var_8 = -74032776;
short var_12 = (short)-1632;
int var_16 = 1938540636;
int zero = 0;
unsigned char var_19 = (unsigned char)12;
unsigned long long int var_20 = 8601283436840770426ULL;
int var_21 = 585647010;
int var_22 = -665359158;
unsigned long long int var_23 = 10294729620228737672ULL;
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
