#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7706674581020938370LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 6377176706011944197ULL;
unsigned char var_10 = (unsigned char)79;
unsigned short var_13 = (unsigned short)36552;
unsigned int var_14 = 381333484U;
short var_15 = (short)-5456;
int zero = 0;
unsigned char var_20 = (unsigned char)19;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-26;
int var_23 = -2039556193;
unsigned long long int var_24 = 14604309494069914015ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
