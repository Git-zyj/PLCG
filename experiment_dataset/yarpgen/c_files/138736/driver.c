#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1881245290;
signed char var_4 = (signed char)-53;
unsigned int var_6 = 2850746322U;
signed char var_7 = (signed char)-53;
unsigned short var_8 = (unsigned short)3407;
short var_13 = (short)-6895;
long long int var_15 = 7443673368367932817LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 4091974123741959324LL;
short var_19 = (short)9001;
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
