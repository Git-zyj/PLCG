#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2467987777U;
unsigned char var_1 = (unsigned char)208;
short var_2 = (short)-20903;
unsigned long long int var_5 = 6055495073782548587ULL;
int zero = 0;
int var_10 = -321006644;
long long int var_11 = 3106445670695664551LL;
unsigned int var_12 = 2918243756U;
unsigned long long int var_13 = 11436027381486911903ULL;
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
