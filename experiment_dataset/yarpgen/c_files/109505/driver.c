#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35964;
short var_4 = (short)29826;
unsigned long long int var_10 = 2204479299534620013ULL;
int zero = 0;
unsigned int var_15 = 912025695U;
unsigned int var_16 = 8700151U;
unsigned short var_17 = (unsigned short)17113;
signed char var_18 = (signed char)-84;
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
