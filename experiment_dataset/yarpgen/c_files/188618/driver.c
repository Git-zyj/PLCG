#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1572674879U;
unsigned long long int var_3 = 1252812448583928574ULL;
unsigned int var_4 = 2306976955U;
short var_5 = (short)-21291;
int var_6 = -446189840;
unsigned int var_12 = 2293179700U;
unsigned char var_15 = (unsigned char)202;
unsigned int var_16 = 3591272483U;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)-14497;
unsigned long long int var_21 = 7409633454450720748ULL;
unsigned int var_22 = 4259158161U;
short var_23 = (short)-30752;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
