#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1319673143;
unsigned short var_2 = (unsigned short)36524;
short var_3 = (short)32751;
unsigned int var_5 = 2347312437U;
unsigned long long int var_6 = 5105325086167287075ULL;
long long int var_14 = -1298053757532006414LL;
signed char var_15 = (signed char)-27;
short var_16 = (short)-14316;
short var_17 = (short)4759;
int zero = 0;
int var_18 = -867357232;
unsigned int var_19 = 3257445800U;
int var_20 = -1739925785;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
