#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)15;
int var_7 = 1324680321;
unsigned long long int var_11 = 13314167738437674392ULL;
unsigned char var_13 = (unsigned char)75;
int zero = 0;
int var_15 = 1472566472;
int var_16 = -1217547734;
int var_17 = -1606812771;
unsigned long long int var_18 = 15137322212941516685ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
