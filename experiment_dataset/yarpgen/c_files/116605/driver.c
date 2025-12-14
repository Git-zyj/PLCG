#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12081988038933604467ULL;
unsigned short var_6 = (unsigned short)61176;
signed char var_7 = (signed char)-120;
signed char var_8 = (signed char)93;
unsigned char var_14 = (unsigned char)107;
unsigned char var_18 = (unsigned char)232;
int zero = 0;
unsigned long long int var_19 = 10991407003331992763ULL;
short var_20 = (short)-3480;
unsigned long long int var_21 = 4000915194733168058ULL;
int var_22 = 1512650747;
unsigned int var_23 = 1454296170U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
