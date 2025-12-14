#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16505673960684167855ULL;
_Bool var_1 = (_Bool)0;
short var_2 = (short)4126;
unsigned char var_6 = (unsigned char)225;
short var_7 = (short)-938;
int zero = 0;
signed char var_11 = (signed char)-4;
unsigned int var_12 = 700648378U;
short var_13 = (short)32087;
unsigned long long int var_14 = 17432315320111441433ULL;
int var_15 = 1916075527;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
