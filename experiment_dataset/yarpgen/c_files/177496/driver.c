#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)116;
unsigned int var_2 = 2785677604U;
unsigned char var_5 = (unsigned char)175;
long long int var_8 = 4138623188872761666LL;
unsigned int var_9 = 124771841U;
unsigned char var_10 = (unsigned char)81;
int zero = 0;
signed char var_11 = (signed char)101;
unsigned long long int var_12 = 4226657661254231834ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
