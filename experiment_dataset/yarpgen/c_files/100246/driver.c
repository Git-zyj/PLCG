#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1840009107;
signed char var_6 = (signed char)-47;
short var_8 = (short)14524;
long long int var_9 = -649997801383747434LL;
unsigned int var_10 = 3143697954U;
signed char var_15 = (signed char)53;
int zero = 0;
unsigned short var_16 = (unsigned short)57997;
signed char var_17 = (signed char)9;
void init() {
}

void checksum() {
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
