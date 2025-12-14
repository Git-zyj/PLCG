#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned int var_1 = 2840641047U;
unsigned short var_2 = (unsigned short)57024;
short var_3 = (short)1878;
short var_4 = (short)13768;
unsigned int var_5 = 871479609U;
unsigned char var_7 = (unsigned char)33;
int var_8 = 1822248135;
int var_9 = -517891261;
unsigned short var_13 = (unsigned short)38889;
int var_14 = -687602482;
unsigned int var_15 = 3792953640U;
unsigned char var_16 = (unsigned char)33;
int zero = 0;
short var_17 = (short)28698;
unsigned char var_18 = (unsigned char)133;
unsigned char var_19 = (unsigned char)50;
unsigned int var_20 = 2730234707U;
short var_21 = (short)-833;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
