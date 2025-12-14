#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-898;
unsigned int var_2 = 390061805U;
short var_10 = (short)-414;
int var_12 = -894341888;
short var_13 = (short)-16118;
int var_14 = -1165912779;
signed char var_15 = (signed char)-78;
unsigned short var_16 = (unsigned short)3416;
int zero = 0;
unsigned char var_17 = (unsigned char)214;
unsigned int var_18 = 3810008519U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
