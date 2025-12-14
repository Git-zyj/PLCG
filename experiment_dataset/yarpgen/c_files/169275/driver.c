#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
unsigned int var_1 = 2384051565U;
signed char var_2 = (signed char)-66;
long long int var_3 = -7226209828353105452LL;
short var_4 = (short)27379;
long long int var_6 = 1714857055970174453LL;
short var_7 = (short)-10895;
int var_8 = 206879864;
short var_10 = (short)14953;
long long int var_11 = 1809941473236672813LL;
signed char var_15 = (signed char)69;
int var_17 = -1704178611;
int zero = 0;
unsigned long long int var_20 = 2169870680876723006ULL;
unsigned char var_21 = (unsigned char)171;
unsigned char var_22 = (unsigned char)229;
void init() {
}

void checksum() {
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
