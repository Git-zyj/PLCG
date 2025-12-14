#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11200399935127865738ULL;
unsigned int var_2 = 61231985U;
unsigned long long int var_3 = 4611962435357737247ULL;
unsigned int var_5 = 448469750U;
unsigned short var_6 = (unsigned short)11845;
unsigned char var_7 = (unsigned char)37;
long long int var_9 = 1470509555558905186LL;
int zero = 0;
unsigned long long int var_10 = 14169681038530802026ULL;
unsigned int var_11 = 2893853730U;
unsigned long long int var_12 = 7827009479616755336ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
