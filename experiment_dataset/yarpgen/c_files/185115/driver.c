#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -95960292;
short var_7 = (short)-7412;
unsigned int var_8 = 1920010209U;
unsigned long long int var_10 = 14752795427103764320ULL;
unsigned char var_14 = (unsigned char)239;
int var_16 = 1891207226;
int zero = 0;
unsigned short var_20 = (unsigned short)26401;
unsigned char var_21 = (unsigned char)234;
unsigned char var_22 = (unsigned char)235;
unsigned long long int var_23 = 5427941976000334331ULL;
int var_24 = -1913077846;
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
