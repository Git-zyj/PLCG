#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44769;
unsigned int var_3 = 3351409089U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 12366630864888370398ULL;
signed char var_10 = (signed char)-36;
short var_13 = (short)291;
int zero = 0;
int var_15 = -280497432;
signed char var_16 = (signed char)-34;
long long int var_17 = -247078619063937620LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
