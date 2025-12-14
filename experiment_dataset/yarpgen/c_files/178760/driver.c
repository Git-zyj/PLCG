#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)167;
signed char var_10 = (signed char)-111;
unsigned long long int var_12 = 1667064409082707778ULL;
unsigned short var_13 = (unsigned short)61333;
unsigned long long int var_14 = 12737477526234924180ULL;
int zero = 0;
unsigned int var_15 = 1547892381U;
unsigned char var_16 = (unsigned char)218;
short var_17 = (short)-30431;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
