#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1101778671574115962LL;
int var_1 = 1509056645;
int var_10 = -1515609235;
int var_15 = 1948904070;
unsigned int var_18 = 1732818721U;
int zero = 0;
unsigned int var_19 = 1269765733U;
short var_20 = (short)19972;
long long int var_21 = -1990041381484796404LL;
short var_22 = (short)-32525;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
