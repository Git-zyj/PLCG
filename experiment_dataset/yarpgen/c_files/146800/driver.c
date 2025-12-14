#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-94;
unsigned char var_2 = (unsigned char)18;
unsigned short var_4 = (unsigned short)26984;
unsigned short var_5 = (unsigned short)53325;
short var_6 = (short)1326;
unsigned short var_7 = (unsigned short)39742;
unsigned char var_11 = (unsigned char)75;
unsigned char var_12 = (unsigned char)236;
unsigned short var_13 = (unsigned short)54290;
unsigned int var_14 = 336441678U;
short var_17 = (short)-12659;
unsigned char var_19 = (unsigned char)93;
int zero = 0;
unsigned char var_20 = (unsigned char)6;
unsigned char var_21 = (unsigned char)106;
unsigned short var_22 = (unsigned short)41291;
short var_23 = (short)-7341;
short var_24 = (short)-17199;
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
