#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3767074294U;
int var_4 = -12648869;
unsigned int var_6 = 2776253539U;
long long int var_7 = 374825476977344252LL;
unsigned long long int var_11 = 11696896679697096832ULL;
short var_13 = (short)13184;
int var_15 = 377555778;
int var_16 = 641523608;
int var_18 = 1727909376;
int zero = 0;
unsigned char var_19 = (unsigned char)247;
unsigned long long int var_20 = 11953740001219601459ULL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-1723;
signed char var_23 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
