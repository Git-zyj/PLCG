#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6113500546909357385LL;
short var_2 = (short)3671;
unsigned int var_3 = 58376372U;
unsigned short var_4 = (unsigned short)47380;
short var_7 = (short)3611;
long long int var_8 = -2299183281359359952LL;
unsigned int var_10 = 370743801U;
unsigned long long int var_12 = 938371858008571722ULL;
unsigned long long int var_13 = 3831863497793674775ULL;
long long int var_14 = 2086240029208546460LL;
signed char var_18 = (signed char)-99;
int zero = 0;
unsigned short var_19 = (unsigned short)11240;
unsigned int var_20 = 3204750118U;
unsigned long long int var_21 = 17720284621284207547ULL;
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
