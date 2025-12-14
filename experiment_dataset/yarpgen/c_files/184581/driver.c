#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 897606451;
unsigned long long int var_6 = 186333413825976525ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 2658084037U;
unsigned long long int var_18 = 2633719268023907112ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)29004;
unsigned char var_20 = (unsigned char)74;
signed char var_21 = (signed char)46;
unsigned char var_22 = (unsigned char)181;
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
