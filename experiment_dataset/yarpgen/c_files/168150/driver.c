#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9040748015126494853ULL;
unsigned short var_3 = (unsigned short)10723;
unsigned short var_4 = (unsigned short)13069;
signed char var_6 = (signed char)71;
int var_10 = 217527156;
long long int var_12 = -8072760474924374482LL;
unsigned long long int var_13 = 8716435796476544883ULL;
int zero = 0;
unsigned long long int var_14 = 6194845997645793130ULL;
unsigned short var_15 = (unsigned short)46586;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
