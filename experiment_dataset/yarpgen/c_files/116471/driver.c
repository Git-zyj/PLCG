#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)186;
int var_8 = -3926312;
unsigned short var_9 = (unsigned short)41380;
unsigned char var_11 = (unsigned char)100;
unsigned short var_12 = (unsigned short)38330;
int var_16 = 1850324855;
int zero = 0;
int var_17 = -1881806126;
unsigned short var_18 = (unsigned short)62762;
int var_19 = 296797474;
unsigned char var_20 = (unsigned char)58;
int var_21 = 131828344;
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
