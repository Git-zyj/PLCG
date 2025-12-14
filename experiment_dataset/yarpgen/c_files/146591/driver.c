#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29818;
unsigned long long int var_3 = 54288274849018627ULL;
unsigned char var_7 = (unsigned char)59;
short var_8 = (short)10941;
unsigned long long int var_16 = 13182282239852981213ULL;
unsigned char var_17 = (unsigned char)181;
int zero = 0;
unsigned char var_19 = (unsigned char)91;
long long int var_20 = 5186762007992083636LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
