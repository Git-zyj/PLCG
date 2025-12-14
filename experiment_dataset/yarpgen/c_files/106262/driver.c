#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3079916365155435468LL;
short var_1 = (short)-20462;
short var_4 = (short)-28910;
unsigned long long int var_5 = 13497210189378225107ULL;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)66;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 8330298012874434848ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)29176;
unsigned long long int var_16 = 1015772138945573803ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
