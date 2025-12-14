#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 119130508871587957LL;
signed char var_1 = (signed char)-9;
signed char var_2 = (signed char)-9;
unsigned int var_3 = 2042590144U;
unsigned short var_4 = (unsigned short)29095;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_12 = -1355312924;
unsigned char var_13 = (unsigned char)11;
int zero = 0;
short var_17 = (short)-19507;
unsigned short var_18 = (unsigned short)17897;
unsigned long long int var_19 = 5115527536636893260ULL;
unsigned char var_20 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
