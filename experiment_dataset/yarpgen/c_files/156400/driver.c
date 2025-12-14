#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8807182822811230170LL;
signed char var_5 = (signed char)-103;
long long int var_7 = 5908809610489702582LL;
short var_8 = (short)-5324;
unsigned long long int var_10 = 8054020400627007838ULL;
unsigned short var_13 = (unsigned short)36751;
unsigned char var_14 = (unsigned char)31;
int zero = 0;
long long int var_15 = -4282790308359482637LL;
unsigned short var_16 = (unsigned short)19667;
void init() {
}

void checksum() {
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
