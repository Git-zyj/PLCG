#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
_Bool var_3 = (_Bool)1;
unsigned int var_7 = 849062299U;
unsigned int var_10 = 2568067955U;
int var_13 = 700859930;
long long int var_14 = -790980058794352941LL;
signed char var_16 = (signed char)60;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1784564519;
_Bool var_19 = (_Bool)1;
int var_20 = -354540945;
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
