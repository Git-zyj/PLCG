#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -307419954;
signed char var_8 = (signed char)-11;
unsigned int var_10 = 216781328U;
unsigned long long int var_13 = 5876913828965612821ULL;
unsigned short var_14 = (unsigned short)8688;
short var_15 = (short)-8173;
int zero = 0;
unsigned int var_16 = 3565866574U;
_Bool var_17 = (_Bool)1;
long long int var_18 = 1263516333124513096LL;
unsigned long long int var_19 = 11573095500085035164ULL;
unsigned short var_20 = (unsigned short)1631;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
