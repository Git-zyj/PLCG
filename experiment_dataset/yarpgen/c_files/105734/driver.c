#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7048315564836399358LL;
int var_3 = 1216236619;
short var_6 = (short)-26892;
unsigned long long int var_11 = 12402127789993414178ULL;
short var_14 = (short)20212;
signed char var_16 = (signed char)11;
int zero = 0;
unsigned int var_17 = 3027942960U;
unsigned char var_18 = (unsigned char)129;
unsigned short var_19 = (unsigned short)302;
unsigned int var_20 = 2946062134U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
