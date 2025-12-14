#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned int var_2 = 3413179553U;
unsigned short var_3 = (unsigned short)50806;
short var_4 = (short)-2034;
signed char var_8 = (signed char)-16;
unsigned long long int var_9 = 3221681071645654998ULL;
unsigned short var_10 = (unsigned short)58303;
unsigned short var_11 = (unsigned short)51604;
signed char var_12 = (signed char)-20;
int zero = 0;
unsigned long long int var_13 = 4988642464472067113ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3420320377U;
signed char var_16 = (signed char)-58;
signed char var_17 = (signed char)-114;
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
