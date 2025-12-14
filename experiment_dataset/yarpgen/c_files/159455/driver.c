#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10319;
unsigned short var_1 = (unsigned short)21976;
unsigned char var_2 = (unsigned char)183;
unsigned long long int var_4 = 13226313695167249660ULL;
unsigned long long int var_5 = 5829769610151857990ULL;
signed char var_8 = (signed char)94;
int zero = 0;
unsigned int var_10 = 3759358158U;
unsigned short var_11 = (unsigned short)8481;
short var_12 = (short)25604;
unsigned char var_13 = (unsigned char)245;
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
