#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2320650547754423054LL;
unsigned long long int var_5 = 11513824664951413701ULL;
unsigned int var_6 = 1956241366U;
unsigned short var_7 = (unsigned short)62242;
unsigned int var_9 = 2461828802U;
signed char var_10 = (signed char)-73;
int zero = 0;
int var_11 = -1602499804;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)141;
short var_14 = (short)-10015;
unsigned char var_15 = (unsigned char)207;
unsigned int var_16 = 1912155416U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
