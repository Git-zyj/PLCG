#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23605;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_3 = 195132492;
unsigned short var_9 = (unsigned short)29934;
unsigned short var_17 = (unsigned short)11104;
int zero = 0;
short var_18 = (short)-1681;
unsigned int var_19 = 1083298001U;
unsigned long long int var_20 = 10500640098088354790ULL;
unsigned short var_21 = (unsigned short)35189;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
