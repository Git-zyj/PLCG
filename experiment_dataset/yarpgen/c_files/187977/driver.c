#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 391293687;
long long int var_2 = 1364698359474932854LL;
unsigned char var_3 = (unsigned char)115;
int var_4 = -844806615;
int var_10 = 477168288;
unsigned int var_11 = 301696752U;
unsigned int var_15 = 471386277U;
unsigned short var_18 = (unsigned short)41518;
int zero = 0;
unsigned short var_19 = (unsigned short)37445;
short var_20 = (short)5795;
unsigned short var_21 = (unsigned short)4811;
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
