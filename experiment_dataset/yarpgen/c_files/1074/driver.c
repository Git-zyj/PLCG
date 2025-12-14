#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7178304230420419397LL;
unsigned long long int var_2 = 4118078908598116187ULL;
unsigned long long int var_3 = 6466914140049114229ULL;
long long int var_4 = 8283837746427499713LL;
unsigned char var_5 = (unsigned char)134;
unsigned long long int var_6 = 8434646950096040425ULL;
long long int var_7 = -1074648777953062287LL;
unsigned long long int var_8 = 13381634256179880535ULL;
unsigned short var_9 = (unsigned short)226;
int zero = 0;
short var_10 = (short)17579;
unsigned short var_11 = (unsigned short)56392;
unsigned int var_12 = 1894209950U;
unsigned int var_13 = 928130707U;
unsigned long long int var_14 = 344524572501839077ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
