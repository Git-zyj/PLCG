#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2681510705U;
short var_1 = (short)-2474;
signed char var_7 = (signed char)66;
signed char var_9 = (signed char)-47;
long long int var_10 = 1415617676945004516LL;
unsigned int var_12 = 2849729066U;
unsigned short var_14 = (unsigned short)33041;
int zero = 0;
unsigned int var_15 = 167273197U;
long long int var_16 = -5980848224937702033LL;
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
