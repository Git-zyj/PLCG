#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18241;
unsigned long long int var_5 = 8743589602282283972ULL;
unsigned char var_7 = (unsigned char)169;
unsigned long long int var_13 = 7758532916017206348ULL;
unsigned char var_14 = (unsigned char)235;
int zero = 0;
signed char var_16 = (signed char)11;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-36;
int var_19 = -808640791;
unsigned char var_20 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
