#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)80;
int var_4 = 1206234112;
unsigned int var_6 = 1228290238U;
unsigned char var_13 = (unsigned char)36;
signed char var_15 = (signed char)-36;
int zero = 0;
unsigned short var_17 = (unsigned short)1439;
int var_18 = -1583794549;
signed char var_19 = (signed char)-94;
short var_20 = (short)-16179;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
