#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8669423432119165676ULL;
unsigned short var_4 = (unsigned short)42676;
unsigned short var_5 = (unsigned short)13887;
unsigned short var_6 = (unsigned short)21205;
unsigned char var_10 = (unsigned char)173;
int var_15 = 474231611;
int var_18 = -131490374;
int zero = 0;
unsigned long long int var_20 = 10477731345656786500ULL;
unsigned char var_21 = (unsigned char)168;
unsigned char var_22 = (unsigned char)173;
int var_23 = -1232234360;
unsigned long long int var_24 = 8346256984159881168ULL;
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
