#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8478022944419487249LL;
unsigned char var_3 = (unsigned char)61;
int var_9 = -1681173961;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1643822312U;
unsigned long long int var_13 = 17052218509606242450ULL;
int zero = 0;
long long int var_20 = -7265641656948273200LL;
short var_21 = (short)-25867;
long long int var_22 = -5729768886270511431LL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
