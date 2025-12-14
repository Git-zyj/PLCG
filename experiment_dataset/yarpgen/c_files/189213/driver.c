#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1636972505;
unsigned char var_4 = (unsigned char)129;
unsigned char var_7 = (unsigned char)231;
int var_10 = 305215474;
int var_17 = -674479648;
int zero = 0;
unsigned short var_18 = (unsigned short)12233;
int var_19 = 1895229691;
unsigned long long int var_20 = 17653439400490677148ULL;
void init() {
}

void checksum() {
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
