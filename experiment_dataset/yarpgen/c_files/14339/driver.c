#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8471593268192439395LL;
unsigned short var_2 = (unsigned short)13382;
signed char var_6 = (signed char)18;
unsigned char var_7 = (unsigned char)134;
unsigned long long int var_9 = 18055088221517419539ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)57884;
unsigned long long int var_13 = 5787396956908366852ULL;
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
