#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-23;
unsigned short var_6 = (unsigned short)51781;
unsigned int var_7 = 3765712626U;
signed char var_10 = (signed char)-56;
unsigned int var_11 = 2106408423U;
int var_12 = -2064298596;
unsigned char var_15 = (unsigned char)221;
int zero = 0;
signed char var_16 = (signed char)-117;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)57294;
short var_19 = (short)9298;
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
