#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2859659415U;
unsigned int var_1 = 244869175U;
unsigned int var_3 = 1111121238U;
unsigned short var_9 = (unsigned short)64257;
unsigned int var_10 = 1671561209U;
signed char var_11 = (signed char)47;
long long int var_13 = 5478711965522086477LL;
int zero = 0;
signed char var_17 = (signed char)57;
unsigned short var_18 = (unsigned short)53951;
unsigned short var_19 = (unsigned short)5060;
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
