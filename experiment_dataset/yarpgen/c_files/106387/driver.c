#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1212565976U;
short var_3 = (short)9061;
long long int var_4 = -7620389169215874293LL;
unsigned int var_11 = 3094249117U;
unsigned int var_17 = 3476493831U;
int zero = 0;
unsigned short var_20 = (unsigned short)761;
unsigned char var_21 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
