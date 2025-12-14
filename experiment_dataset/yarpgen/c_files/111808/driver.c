#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13092;
unsigned short var_4 = (unsigned short)62677;
unsigned short var_6 = (unsigned short)57316;
unsigned short var_8 = (unsigned short)47918;
unsigned int var_12 = 1047707920U;
unsigned short var_14 = (unsigned short)46529;
int zero = 0;
unsigned short var_15 = (unsigned short)9968;
unsigned short var_16 = (unsigned short)57834;
unsigned short var_17 = (unsigned short)9336;
unsigned int var_18 = 3541361326U;
unsigned long long int var_19 = 7024440217454022447ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
