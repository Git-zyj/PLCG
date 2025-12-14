#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -727399600698534775LL;
unsigned int var_7 = 1436489453U;
unsigned char var_8 = (unsigned char)199;
int var_9 = 707299624;
signed char var_11 = (signed char)-5;
int var_12 = 1878765858;
int zero = 0;
unsigned char var_13 = (unsigned char)112;
signed char var_14 = (signed char)99;
int var_15 = 229843874;
short var_16 = (short)9557;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
