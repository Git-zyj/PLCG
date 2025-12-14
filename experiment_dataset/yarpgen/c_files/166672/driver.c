#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)17560;
unsigned int var_6 = 127904791U;
long long int var_10 = -2491841827040127506LL;
short var_11 = (short)-15803;
short var_12 = (short)-30731;
long long int var_13 = -8885582606157860457LL;
short var_15 = (short)-3535;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)16451;
unsigned short var_18 = (unsigned short)21663;
signed char var_19 = (signed char)-59;
void init() {
}

void checksum() {
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
