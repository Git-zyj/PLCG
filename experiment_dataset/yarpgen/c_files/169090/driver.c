#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2729682128U;
signed char var_3 = (signed char)-50;
unsigned short var_4 = (unsigned short)6075;
unsigned short var_5 = (unsigned short)39549;
long long int var_10 = -7242679157822198601LL;
unsigned int var_11 = 1438975202U;
unsigned short var_13 = (unsigned short)10606;
unsigned short var_15 = (unsigned short)15755;
int zero = 0;
unsigned char var_17 = (unsigned char)154;
signed char var_18 = (signed char)-125;
unsigned long long int var_19 = 17123857255406358350ULL;
_Bool var_20 = (_Bool)1;
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
