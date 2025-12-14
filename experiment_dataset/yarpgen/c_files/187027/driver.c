#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30560;
int var_3 = -78682657;
short var_4 = (short)21466;
long long int var_6 = -5639457769497205517LL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-2;
long long int var_9 = 7721542890666902554LL;
unsigned char var_10 = (unsigned char)166;
unsigned int var_11 = 3158486517U;
int zero = 0;
unsigned int var_12 = 2714648234U;
int var_13 = -21759845;
signed char var_14 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
