#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41153;
unsigned int var_4 = 3371717909U;
short var_7 = (short)-14563;
unsigned long long int var_10 = 11320145248937351635ULL;
signed char var_11 = (signed char)2;
int var_13 = -747165649;
int var_14 = -1809712231;
int zero = 0;
signed char var_20 = (signed char)-121;
int var_21 = -938264210;
int var_22 = -1093781880;
int var_23 = -1392765461;
int var_24 = -242021203;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
