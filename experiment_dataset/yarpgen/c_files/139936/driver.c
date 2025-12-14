#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5636987015690868212LL;
unsigned char var_2 = (unsigned char)27;
long long int var_4 = 353416145679032406LL;
unsigned char var_6 = (unsigned char)19;
signed char var_7 = (signed char)42;
short var_8 = (short)-32149;
int zero = 0;
unsigned int var_10 = 3458577092U;
unsigned char var_11 = (unsigned char)255;
int var_12 = 418671554;
unsigned int var_13 = 557809655U;
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
