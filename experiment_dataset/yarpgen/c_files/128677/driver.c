#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59081;
unsigned int var_1 = 2952428451U;
unsigned short var_5 = (unsigned short)43871;
unsigned long long int var_6 = 14207753950420901395ULL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)47;
unsigned short var_12 = (unsigned short)44448;
int zero = 0;
unsigned int var_15 = 1981208521U;
unsigned char var_16 = (unsigned char)102;
unsigned short var_17 = (unsigned short)16786;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
