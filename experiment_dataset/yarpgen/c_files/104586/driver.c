#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1101575621;
unsigned long long int var_2 = 15053610099736577743ULL;
short var_5 = (short)5102;
unsigned int var_6 = 35849158U;
unsigned long long int var_7 = 2446433965832593096ULL;
unsigned long long int var_8 = 17456023263553029493ULL;
int var_10 = -2060930527;
unsigned int var_11 = 1385745986U;
unsigned long long int var_12 = 12236210701019181101ULL;
short var_13 = (short)9425;
int var_14 = -786001529;
long long int var_16 = -7925387185581093162LL;
unsigned long long int var_18 = 18386666296367294191ULL;
int zero = 0;
unsigned long long int var_20 = 1672923411010607433ULL;
unsigned long long int var_21 = 12298636926313080075ULL;
int var_22 = 1540386569;
unsigned int var_23 = 1149958701U;
long long int var_24 = -8830731402210449854LL;
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
