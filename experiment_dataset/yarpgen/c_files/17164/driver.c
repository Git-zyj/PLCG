#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)173;
unsigned short var_2 = (unsigned short)24737;
signed char var_4 = (signed char)-104;
unsigned long long int var_5 = 15893518018771065629ULL;
int var_6 = 741485657;
unsigned int var_8 = 3376583495U;
unsigned char var_9 = (unsigned char)115;
_Bool var_11 = (_Bool)0;
short var_17 = (short)21292;
int zero = 0;
unsigned int var_18 = 4056193768U;
short var_19 = (short)-17090;
void init() {
}

void checksum() {
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
