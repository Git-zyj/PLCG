#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 628370812953420608LL;
signed char var_6 = (signed char)114;
signed char var_7 = (signed char)-67;
int var_10 = -2121708835;
unsigned char var_11 = (unsigned char)148;
int zero = 0;
short var_16 = (short)22352;
unsigned short var_17 = (unsigned short)11645;
unsigned int var_18 = 4198351858U;
unsigned long long int var_19 = 11526762894315155624ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
