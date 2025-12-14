#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10587110989535300158ULL;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)53;
short var_12 = (short)-18373;
signed char var_13 = (signed char)7;
signed char var_15 = (signed char)34;
int zero = 0;
unsigned long long int var_18 = 12999391290189177228ULL;
unsigned int var_19 = 1206790042U;
long long int var_20 = -8149682395046501261LL;
unsigned long long int var_21 = 14513065247876532420ULL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
