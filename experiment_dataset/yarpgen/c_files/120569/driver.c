#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 249577779;
unsigned long long int var_4 = 8525395323186970206ULL;
unsigned long long int var_5 = 10511132906536089762ULL;
unsigned long long int var_7 = 8375472955131208144ULL;
signed char var_8 = (signed char)-9;
short var_13 = (short)-10289;
short var_15 = (short)4786;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)38;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
