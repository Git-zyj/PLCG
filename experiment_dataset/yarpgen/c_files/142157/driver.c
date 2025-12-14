#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)41394;
short var_4 = (short)27811;
long long int var_6 = 3504718108133499947LL;
int var_10 = 1368607001;
unsigned short var_12 = (unsigned short)33632;
int zero = 0;
signed char var_18 = (signed char)-114;
unsigned int var_19 = 2175510397U;
void init() {
}

void checksum() {
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
