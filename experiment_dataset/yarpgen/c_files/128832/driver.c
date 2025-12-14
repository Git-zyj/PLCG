#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-69;
unsigned long long int var_8 = 13324836043136890674ULL;
short var_9 = (short)2903;
signed char var_10 = (signed char)-29;
unsigned int var_13 = 2824226798U;
short var_14 = (short)-21742;
unsigned long long int var_15 = 1824548839023194177ULL;
int zero = 0;
long long int var_17 = -5557496292994197374LL;
long long int var_18 = -7519174609238557246LL;
short var_19 = (short)27983;
void init() {
}

void checksum() {
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
