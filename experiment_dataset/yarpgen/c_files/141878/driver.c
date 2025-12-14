#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -297210323;
int var_1 = 1639318214;
int var_2 = 1835959372;
unsigned char var_4 = (unsigned char)229;
unsigned short var_6 = (unsigned short)59174;
int var_10 = -1041022284;
short var_16 = (short)-10546;
long long int var_19 = -7842921905443281499LL;
int zero = 0;
short var_20 = (short)-9546;
short var_21 = (short)-6409;
unsigned char var_22 = (unsigned char)136;
void init() {
}

void checksum() {
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
