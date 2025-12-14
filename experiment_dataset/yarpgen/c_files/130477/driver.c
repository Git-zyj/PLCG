#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20727;
signed char var_2 = (signed char)-15;
long long int var_3 = -5019383918270844387LL;
signed char var_4 = (signed char)6;
signed char var_5 = (signed char)-92;
unsigned char var_6 = (unsigned char)111;
signed char var_9 = (signed char)73;
int var_10 = 1140839041;
int zero = 0;
unsigned char var_11 = (unsigned char)41;
signed char var_12 = (signed char)61;
short var_13 = (short)25212;
long long int var_14 = 5735472500938472549LL;
long long int var_15 = -1538962189663649809LL;
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
