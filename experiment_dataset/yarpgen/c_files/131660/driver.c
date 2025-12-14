#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)-23;
short var_8 = (short)-29479;
unsigned long long int var_12 = 12159343224346766886ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 14933207217977753086ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 2860613222258655748ULL;
unsigned long long int var_18 = 9252000576221623688ULL;
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
