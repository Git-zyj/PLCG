#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21589;
long long int var_2 = -1333696553650185706LL;
signed char var_4 = (signed char)-105;
signed char var_5 = (signed char)21;
unsigned short var_7 = (unsigned short)37633;
unsigned short var_8 = (unsigned short)6351;
int zero = 0;
unsigned int var_13 = 2643353297U;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int var_16 = 1259224869;
long long int var_17 = -4565686146035653729LL;
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
