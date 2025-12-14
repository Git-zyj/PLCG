#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3048030834U;
int var_3 = -642856361;
int var_5 = 96698757;
short var_10 = (short)6056;
int zero = 0;
unsigned char var_11 = (unsigned char)105;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 9167113474059786271ULL;
int var_14 = -659381189;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
