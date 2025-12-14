#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 14310200127771129078ULL;
int var_5 = -1984548246;
unsigned long long int var_6 = 8985701729237521257ULL;
unsigned int var_7 = 2780790691U;
long long int var_9 = -6922086929541665064LL;
int var_11 = 1650323934;
int var_12 = -1560566483;
unsigned long long int var_13 = 5050981027528670646ULL;
long long int var_14 = 5077812677932778532LL;
long long int var_15 = -6205801222868360913LL;
signed char var_18 = (signed char)-115;
long long int var_19 = -4401447631702624322LL;
int zero = 0;
unsigned short var_20 = (unsigned short)24958;
unsigned long long int var_21 = 4943367225518462491ULL;
unsigned long long int var_22 = 17239525252217643763ULL;
short var_23 = (short)24102;
long long int var_24 = -7741542644805134913LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
