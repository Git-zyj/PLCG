#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7791;
signed char var_1 = (signed char)-94;
unsigned long long int var_2 = 14529627465797184349ULL;
unsigned int var_9 = 3768537439U;
long long int var_10 = -5584244683657211559LL;
signed char var_12 = (signed char)-49;
int zero = 0;
signed char var_14 = (signed char)-65;
unsigned short var_15 = (unsigned short)52687;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
