#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6835711037333186572LL;
short var_2 = (short)-27575;
unsigned long long int var_3 = 6168477153661584221ULL;
long long int var_4 = -4774764978176311243LL;
unsigned int var_9 = 2115368805U;
int zero = 0;
unsigned long long int var_11 = 10636450305520793367ULL;
long long int var_12 = 6712872368386517428LL;
unsigned char var_13 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
