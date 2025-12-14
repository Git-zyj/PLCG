#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-104;
unsigned char var_3 = (unsigned char)38;
unsigned short var_8 = (unsigned short)31611;
unsigned char var_9 = (unsigned char)175;
short var_12 = (short)6667;
signed char var_15 = (signed char)-9;
long long int var_18 = 2866646723993133131LL;
int zero = 0;
unsigned short var_19 = (unsigned short)34932;
short var_20 = (short)26031;
signed char var_21 = (signed char)81;
unsigned short var_22 = (unsigned short)35124;
unsigned short var_23 = (unsigned short)33029;
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
