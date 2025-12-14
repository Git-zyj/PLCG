#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56643;
unsigned long long int var_3 = 14493644350264359569ULL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-68;
unsigned long long int var_9 = 93763562388290443ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)15529;
unsigned int var_18 = 2215390692U;
short var_19 = (short)11328;
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
