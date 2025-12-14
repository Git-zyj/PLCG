#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 588222778U;
int var_3 = 1255652395;
long long int var_6 = 1417544260652161764LL;
int var_9 = 1421945239;
signed char var_10 = (signed char)-68;
int zero = 0;
long long int var_11 = -6152981207690534707LL;
long long int var_12 = 7568665092366026449LL;
unsigned char var_13 = (unsigned char)21;
long long int var_14 = 1212986272120454745LL;
unsigned char var_15 = (unsigned char)64;
unsigned char var_16 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
