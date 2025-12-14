#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1250064220825899991LL;
unsigned short var_5 = (unsigned short)37272;
unsigned char var_11 = (unsigned char)6;
unsigned short var_13 = (unsigned short)57363;
unsigned long long int var_16 = 124597820654396679ULL;
int zero = 0;
signed char var_17 = (signed char)67;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2630978926U;
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
