#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -3133586611474064913LL;
unsigned int var_5 = 17985877U;
unsigned long long int var_7 = 10855058696322186711ULL;
unsigned short var_8 = (unsigned short)44935;
int var_9 = 654033371;
int zero = 0;
unsigned short var_10 = (unsigned short)37346;
signed char var_11 = (signed char)-76;
unsigned short var_12 = (unsigned short)61141;
signed char var_13 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
