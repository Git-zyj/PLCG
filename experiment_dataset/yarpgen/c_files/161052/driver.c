#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 106379406234565811ULL;
short var_1 = (short)12933;
_Bool var_6 = (_Bool)0;
short var_7 = (short)17587;
signed char var_9 = (signed char)26;
unsigned long long int var_10 = 16608758084403421104ULL;
unsigned char var_12 = (unsigned char)206;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)109;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
