#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1616521112;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 3831666364U;
signed char var_7 = (signed char)-105;
unsigned short var_11 = (unsigned short)56800;
unsigned short var_12 = (unsigned short)32991;
int zero = 0;
unsigned long long int var_14 = 3752779485184555181ULL;
long long int var_15 = 8427546233439323719LL;
int var_16 = 13967541;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
