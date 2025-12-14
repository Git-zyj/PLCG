#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10981477591932323895ULL;
unsigned short var_1 = (unsigned short)10713;
short var_3 = (short)-9289;
signed char var_4 = (signed char)88;
long long int var_6 = -7884415998314388945LL;
short var_9 = (short)-3247;
unsigned long long int var_10 = 9655683142142644764ULL;
int zero = 0;
unsigned long long int var_11 = 14186580570555756270ULL;
unsigned long long int var_12 = 205452308656944377ULL;
unsigned char var_13 = (unsigned char)182;
unsigned short var_14 = (unsigned short)62806;
signed char var_15 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
