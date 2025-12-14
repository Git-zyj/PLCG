#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9612567194926596147ULL;
unsigned short var_3 = (unsigned short)41874;
short var_6 = (short)24594;
int var_10 = 562420110;
int var_11 = -261603542;
int zero = 0;
signed char var_17 = (signed char)18;
unsigned char var_18 = (unsigned char)201;
short var_19 = (short)-5830;
signed char var_20 = (signed char)-36;
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
