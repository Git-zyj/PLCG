#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -173594420316861920LL;
long long int var_1 = 7308592581045753616LL;
int var_2 = 924608139;
short var_3 = (short)15414;
unsigned int var_4 = 2697461115U;
short var_6 = (short)-1395;
unsigned char var_7 = (unsigned char)13;
signed char var_8 = (signed char)-57;
unsigned int var_9 = 324763904U;
int zero = 0;
unsigned char var_10 = (unsigned char)12;
int var_11 = -1311494097;
unsigned char var_12 = (unsigned char)40;
signed char var_13 = (signed char)61;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
