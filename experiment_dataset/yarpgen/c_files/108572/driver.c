#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3313511418761532685LL;
unsigned long long int var_3 = 10401241848302844411ULL;
unsigned short var_7 = (unsigned short)39029;
unsigned short var_8 = (unsigned short)15634;
unsigned int var_9 = 1870551328U;
unsigned long long int var_12 = 5835946220113210452ULL;
unsigned short var_13 = (unsigned short)46218;
unsigned int var_15 = 3008026665U;
unsigned long long int var_16 = 9675652201417076388ULL;
int zero = 0;
unsigned long long int var_17 = 8718015803176439454ULL;
unsigned long long int var_18 = 12113895728514645969ULL;
long long int var_19 = -223367219679260895LL;
long long int var_20 = 3514886615935991220LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
