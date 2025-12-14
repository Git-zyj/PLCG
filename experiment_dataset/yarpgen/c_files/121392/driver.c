#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6901062359867332416ULL;
signed char var_2 = (signed char)64;
int var_4 = 918821916;
_Bool var_5 = (_Bool)1;
int var_7 = 1927005182;
unsigned long long int var_8 = 12193729394258301996ULL;
signed char var_9 = (signed char)-27;
unsigned long long int var_11 = 11515395955088272142ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1715132263U;
int zero = 0;
short var_14 = (short)-26596;
unsigned int var_15 = 2925319827U;
signed char var_16 = (signed char)-20;
unsigned char var_17 = (unsigned char)88;
int var_18 = -109615407;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
