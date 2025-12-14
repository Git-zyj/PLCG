#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6969830515326819648ULL;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)21797;
int var_3 = 1886101376;
short var_5 = (short)-21102;
unsigned long long int var_8 = 2174493661772975419ULL;
signed char var_12 = (signed char)-105;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int var_15 = -439137809;
unsigned long long int var_16 = 11878052568704795479ULL;
signed char var_17 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
