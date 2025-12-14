#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11080972139326023679ULL;
unsigned char var_3 = (unsigned char)140;
unsigned long long int var_4 = 14102521987559113170ULL;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)-48;
unsigned int var_10 = 3654900775U;
short var_15 = (short)-13750;
int zero = 0;
unsigned int var_16 = 150809375U;
short var_17 = (short)1843;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
