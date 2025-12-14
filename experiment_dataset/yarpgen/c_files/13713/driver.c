#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-81;
unsigned long long int var_2 = 12085823244527594970ULL;
_Bool var_4 = (_Bool)1;
int var_5 = 1832267250;
short var_6 = (short)-889;
signed char var_8 = (signed char)-97;
unsigned int var_10 = 1434501809U;
int var_11 = 713991250;
unsigned char var_12 = (unsigned char)204;
signed char var_15 = (signed char)63;
short var_19 = (short)29357;
int zero = 0;
short var_20 = (short)-30690;
int var_21 = 1747122287;
unsigned long long int var_22 = 18034020080951387328ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
