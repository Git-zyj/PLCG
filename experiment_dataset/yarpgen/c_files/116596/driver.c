#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1429441946570547124LL;
unsigned short var_1 = (unsigned short)53157;
unsigned char var_4 = (unsigned char)109;
long long int var_12 = 6714406336589076783LL;
int zero = 0;
signed char var_14 = (signed char)-103;
long long int var_15 = -9208270832852553637LL;
int var_16 = -786115175;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
