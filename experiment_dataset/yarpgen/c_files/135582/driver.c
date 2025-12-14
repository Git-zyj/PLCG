#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47476;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)0;
int var_5 = 1865473717;
unsigned long long int var_6 = 4295778979563739750ULL;
int var_7 = -1520053249;
unsigned short var_11 = (unsigned short)25687;
unsigned long long int var_12 = 18331498807532096850ULL;
unsigned long long int var_13 = 7634874100006642ULL;
unsigned short var_16 = (unsigned short)36687;
int zero = 0;
signed char var_18 = (signed char)-80;
int var_19 = 1264804258;
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
