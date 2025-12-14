#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11049741788103892811ULL;
long long int var_7 = 8688525030949656399LL;
unsigned int var_14 = 1584476126U;
signed char var_15 = (signed char)-59;
int zero = 0;
unsigned short var_20 = (unsigned short)35861;
long long int var_21 = 3696916277603459640LL;
unsigned long long int var_22 = 11365757409450585762ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
