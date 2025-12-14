#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
unsigned short var_10 = (unsigned short)122;
unsigned long long int var_11 = 3423872983573052077ULL;
unsigned char var_12 = (unsigned char)43;
short var_15 = (short)-972;
int zero = 0;
unsigned short var_18 = (unsigned short)50235;
signed char var_19 = (signed char)-122;
signed char var_20 = (signed char)-111;
unsigned int var_21 = 3867756576U;
signed char var_22 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
