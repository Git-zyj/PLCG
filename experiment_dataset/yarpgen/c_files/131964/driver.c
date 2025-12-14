#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6721444887557801398LL;
unsigned int var_2 = 758988963U;
unsigned short var_3 = (unsigned short)12014;
int zero = 0;
short var_14 = (short)7796;
unsigned char var_15 = (unsigned char)5;
long long int var_16 = 8320977259992432300LL;
unsigned char var_17 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
