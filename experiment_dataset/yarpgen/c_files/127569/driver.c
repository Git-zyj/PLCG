#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1175652538;
unsigned long long int var_6 = 335344867188145912ULL;
signed char var_8 = (signed char)-43;
unsigned int var_12 = 1386995103U;
int zero = 0;
int var_19 = -614655195;
unsigned long long int var_20 = 18128382887131782197ULL;
unsigned int var_21 = 2714640978U;
int var_22 = -526389335;
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
