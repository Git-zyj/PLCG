#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)238;
signed char var_4 = (signed char)30;
signed char var_7 = (signed char)-60;
signed char var_9 = (signed char)-26;
unsigned long long int var_10 = 3570707644839571873ULL;
unsigned long long int var_13 = 14458523223472235190ULL;
long long int var_14 = 9197444346381538898LL;
int zero = 0;
signed char var_16 = (signed char)-112;
unsigned int var_17 = 3754177019U;
signed char var_18 = (signed char)-16;
unsigned short var_19 = (unsigned short)51335;
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
