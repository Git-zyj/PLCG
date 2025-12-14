#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)98;
unsigned int var_6 = 3709305230U;
signed char var_7 = (signed char)14;
unsigned short var_8 = (unsigned short)21671;
int var_9 = -1351523653;
int var_10 = -945784167;
signed char var_11 = (signed char)-78;
unsigned int var_12 = 3448031689U;
long long int var_13 = -7719032416596045039LL;
int var_15 = 259916270;
int zero = 0;
unsigned char var_16 = (unsigned char)138;
int var_17 = 1642163965;
unsigned short var_18 = (unsigned short)145;
unsigned int var_19 = 4190878016U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
