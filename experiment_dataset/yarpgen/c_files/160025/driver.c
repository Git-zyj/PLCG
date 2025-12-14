#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54304;
unsigned char var_6 = (unsigned char)43;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)12;
signed char var_11 = (signed char)27;
long long int var_13 = -4074302393579558704LL;
signed char var_15 = (signed char)71;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 7111225856517101970ULL;
long long int var_19 = 1283709805017780657LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
