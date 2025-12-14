#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
unsigned int var_3 = 1657436562U;
unsigned short var_4 = (unsigned short)26635;
unsigned long long int var_5 = 6041263901684183351ULL;
int var_6 = -167890497;
unsigned char var_8 = (unsigned char)125;
short var_9 = (short)-15125;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)5;
unsigned char var_15 = (unsigned char)112;
unsigned long long int var_16 = 7253138464213480196ULL;
unsigned long long int var_17 = 15301790560394887892ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
