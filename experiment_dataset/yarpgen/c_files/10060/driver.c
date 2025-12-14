#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 64785305;
long long int var_5 = 8824562752435530438LL;
unsigned short var_7 = (unsigned short)60062;
long long int var_10 = 2604553042679371696LL;
unsigned short var_12 = (unsigned short)16062;
long long int var_13 = 5576867314202856311LL;
int zero = 0;
long long int var_18 = 7018427693180543009LL;
int var_19 = -530027002;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
